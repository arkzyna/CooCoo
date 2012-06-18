#include "complexe.h"
#include "entier.h"
#include "reel.h"
#include "rationnel.h"


Complexe::Complexe(const Complexe* aComplexe)
{
    // Traitement diff�rent ici, ne pas simplement copier les pointeurs mais faire de nouveaux objets
    // A traiter si le temps... Cette fonction ne sera jamais appel�e.
}

Complexe::Complexe(const Entier* aEntier)
{
    pRe = new Entier(aEntier->getValeur()); // Pour en faire une copie
    pIm = new Entier(0);
}

Complexe::Complexe(const Reel* aReel)
{
    pRe = new Reel(aReel->getValeur()); // Pour en faire une copie
    pIm = new Entier(0);
}

Complexe::Complexe(const Rationnel *aRationnel)
{
    pRe = new Rationnel(aRationnel);
    pIm = new Entier(0);    // Ou alors faire un 0/1 si on tient vraiment � avoir un rationnel aussi en partie imaginaire...
}
