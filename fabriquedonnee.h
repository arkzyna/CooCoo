#ifndef FABRIQUEDONNEE_H
#define FABRIQUEDONNEE_H

/*!
* \file fabriquedonne.h
* \author Letellier/Yassine
*/

#include "complexe.h"
#include "rationnel.h"
#include "reel.h"
#include "entier.h"
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
    - construit l'objet correspondant en appelant le constructeur de son type, et le renvoie
    */
    Donnee* creerDonnee(const QString& terme);

    /*
      Deuxi�me fonction : convertisseuse
    */

    Donnee* creerDonnee(const Donnee* donneeDepart, const QString typeSouhaite)
    {
        if (dynamic_cast<const Entier*>(donneeDepart))
            return creerDonneeStatic(static_cast<const Entier*>(donneeDepart), typeSouhaite);
        if (dynamic_cast<const Reel*>(donneeDepart))
            return creerDonneeStatic(static_cast<const Reel*>(donneeDepart), typeSouhaite);
        if (dynamic_cast<const Rationnel*>(donneeDepart))
            return creerDonneeStatic(static_cast<const Rationnel*>(donneeDepart), typeSouhaite);

    }

private:
    template<typename T>
    inline Donnee* creerDonneeStatic(const T* donneeDepart, const QString typeSouhaite) {
        if (typeSouhaite == "Entier") return new Entier(donneeDepart);
        if (typeSouhaite == "Reel") return new Reel(donneeDepart);
        if (typeSouhaite == "Rationnel") return new Rationnel(donneeDepart);
    }

};


#endif // FABRIQUEDONNEE_H
