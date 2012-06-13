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

// 1 seule factory ==> utiliser un singleton, pour faire 1 unique instance qui fait tout?
// Ou la mettre en statique, et en faire une sorte d'agglom�rat de m�thodes?

class FabriqueDonnee
{
public:

    /*
    Premi�re fonction :
    - r�cup�re un terme envoy� par le parser,
    - teste son type (m�thodes statiques isEntier, isReel...)
    - construit l'objet correspondant et le renvoie
    */
    static Donnee* creerDonnee(const QString& terme);

    /*
    Deuxi�me fonction... Y'a peut etre mieux?:
    - r�cup�re la valeur sous forme de string (pas le choix, car on ne connait pas son type � l'avance!)
         ===> ex rationnel : impossible � passer autrement qu'en string ?!
    - r�cup�re l'entier d�crivant le type final (correspondance liste d�roulante)
        0 ==> entier
        1 ==> rationnel
        2 ==> r�el
    - r�cup�re un bool�en pr�cisant si l'on est en complexe ou non
    - d�tecte le type via les fonctions isEntier, isReel... comme dans la premi�re fonction
    - le convertit vers le type d�sir� (encore un passage string ==> num ==> string?)
    - construit l'objet et le renvoie
    */

    static Donnee* creerDonnee(const QString& valeur, int typeFinal, bool complexeActive);

    // M�thodes de conversion, appel�es dans creerDonnee et pourquoi pas ailleurs, plus tard...

    static double int2double(int x);


};


#endif // FABRIQUEDONNEE_H
