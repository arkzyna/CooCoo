#ifndef RATIONNEL_H
#define RATIONNEL_H

/*!
* \file rationnel.h
* \author Letellier/Yassine
*/

#include "entier.h"

class Rationnel : public Constante
{
    // Pas forc�ment n�cessaire, on pourrait mettre des entiers tout simple... Mais �a serait moins styl� sur l'UML ^^
    Entier ent1;
    Entier ent2;
public:
    // Rationnel : plut�t le construire avec une QString!
    // Le seul int�r�t de stocker sous valeur num�rique est pour faire les calculs.
    // Tout le reste, les entr�es, les sorties, c'est du QString!
    Rationnel(const QString& aQString = "0/1");
    virtual QString toQString() const;

};

#endif // RATIONNEL_H
