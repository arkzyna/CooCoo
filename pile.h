#ifndef PILE_H
#define PILE_H

#include "donnee.h"

// Design pattern Singleton

// Je pr�f�re faire ma propre pile plut�t que de r�utiliser QStack, �a �vite de lire la doc et de prendre connaissance de la tonne d'attributs et m�thodes... Et �a fait r�viser les piles :p
// Et c'est plus s�r pour le Singleton

class Pile
{
    static Pile* instance;
    unsigned int sommet;
    unsigned int nbMax;
    Donnee** tab;

    // Constructeurs et destructeur en private pour interdire leur utilisation
    Pile(unsigned int n) : sommet(-1), nbMax(n), tab(new Donnee*[n]) {}
    Pile(const Pile&);
    void operator=(const Pile&);
    ~Pile();


public:
    static Pile& getInstance();
    static void libereInstance();
    void push(Donnee* aDonnee);
    Donnee* pop() const;

    // Il faut depiler et empiler comme methodes

    // En profiter pour glisser un iterator?
};

#endif // PILE_H
