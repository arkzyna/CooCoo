#ifndef DONNEE_H
#define DONNEE_H

#include <string>

using namespace std;

// ABSTRAITE

class Donnee
{
public:
    Donnee();
    virtual const string afficher() const = 0; // D�finit ce qui va �tre lu par l'utilisateur
};

#endif // DONNEE_H
