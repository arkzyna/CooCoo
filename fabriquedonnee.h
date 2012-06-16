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
      Deuxi�me fonction :
      - r�cup�re un objet et une cha�ne d�crivant le type souhait� (ou un entier si tu pr�f�res?)
      - r�alise la conversion en appelant le constructeur appropri� du type souhait�
    */
    template <class T>
    Donnee* creerDonnee(const T* donneeDepart, const QString typeSouhaite)
    {
        if (typeSouhaite == "Entier") return new Entier(donneeDepart);
        if (typeSouhaite == "Reel") return new Reel(donneeDepart);
        if (typeSouhaite == "Rationnel") return new Rationnel(donneeDepart);
    }
    // Ce template permet d'�viter de faire une fonction creerDonnee pour chaque type diff�rent.
    // En effet, si on prend juste un Donnee* donneeDepart, et qu'on appelle un constructeur dessus,
    // Il y aura ambigu�t�, car le type n'aura pas �t� identifi�!
    // A ce niveau, on est oblig� d'appeler le constructeur avec un argument de type bien d�fini, et le template s'occupe donc de �a
};


#endif // FABRIQUEDONNEE_H
