#ifndef MEMENTO_H
#define MEMENTO_H


/*!
* \file memento.h
* \author Letellier/Yassine
*/

/*! \class gardien
* \brief Classe representant un gardien
*/

/* Normalement, dans le design pattern memento, il y a 3 classes:
  cr�ateur (ici, la Pile), Memento (une capsule qui contient un �tat du cr�ateur),
  gardien (qui ne fait que manipuler cette capsule)
  Ca respecte mieux l'encapsulation

  Mais pour simplifier, on ne fera pas de classe memento, juste une classe gardien.
  Le gardien sera appel� depuis la pile pour sauvegarder et restaurer les contextes.
*/


#include <QStack>
#include "donnee.h"

class Pile;

class Gardien
{
    QStack<Pile*> tabPile;
    // QStack de pointeurs vers des Pile
    // Chaque pointeur correspond � un �tat sauvegard�

public:
    Gardien() {}
    /*
    static void undo();
    static void redo();
    virtual void execute();
    */
};



#endif // MEMENTO_H
