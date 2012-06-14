#ifndef FABRIQUEDONNEE_H
#define FABRIQUEDONNEE_H

/*!
* \file fabriquedonne.h
* \author Letellier/Yassine
*/

#include "complexe.h"
#include "rationnel.h"
#include "reel.h"
#include "constanteexp.h"
#include "exceptionCooCoo.h"
#include <QString>

// Impl�mentation d'un design pattern de type factory

// 1 seule factory : on en fait un singleton

class FabriqueDonnee
{
    static FabriqueDonnee* instance;

    // Constructeurs, destructeur et operator= en private pour interdire leur utilisation
    FabriqueDonnee() {}
    FabriqueDonnee(const FabriqueDonnee& fd) {}
    void operator=(const FabriqueDonnee& fd) {}
    ~FabriqueDonnee() {}

public:

    static FabriqueDonnee* getInstance();
    static void libereInstance();

    /*
    Premi�re fonction :
    - r�cup�re un terme envoy� par le parser,
    - teste son type (m�thodes statiques isEntier, isReel...)
    - construit l'objet correspondant et le renvoie
    */
    Donnee* creerDonnee(const QString& terme);


    // Autres : VOIR ORGANISATION FEUILLE !


};


#endif // FABRIQUEDONNEE_H
