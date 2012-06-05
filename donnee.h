#ifndef DONNEE_H
#define DONNEE_H

#include <QString>

using namespace std;

// ABSTRAITE

class Donnee
{
public:
    Donnee();
    virtual QString toQString() const = 0; // M�thode virtuelle pure, red�finie � chaque fois, permet la conversion de la valeur en QString
};

#endif // DONNEE_H
