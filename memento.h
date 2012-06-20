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
  cr�ateur (ici, la Pile), Memento (une capsule qui conserve un �tat du cr�ateur),
  gardien (qui contient un historique des �tats et communique avec le Memento)
  Ca respecte mieux l'encapsulation

  Mais pour simplifier, on ne fera pas de classe Memento, juste une classe Gardien.
  Le gardien sera appel� depuis la pile pour sauvegarder et restaurer les contextes.
*/

/*
  Donc quand l'utilisateur cliquera sur "undo", par exemple, la calculatrice (mainwindow.cpp)
  fera un truc du genre :
  Pile* newInstancePile = instancePile->gard->undo();
  delete instancePile;
  instancePile = newInstancePile;

 Bref : il faut supprimer l'ancienne instance de Pile (tout l'objet, pas seulement son tableau!)
 et installer la nouvelle dans l'attribut de notre mainwindow
*/

/*
  Mais faut vraiment revoir l'enchainement des undo/redo l�, c'est la gal�re!
*/


#include <QVector>
#include "donnee.h"

class Pile;

class Gardien
{
    // QVector de pointeurs vers des Pile
    // Chaque pointeur correspond � un �tat sauvegard�
    // Au d�but je voulais faire un QStack. Ca marche tr�s bien pour undo,
    // Mais �a devient tr�s peu commode pour le redo!
    QVector<Pile*> tabPile;
    int current;

    // Id�e : se servir des attributs de cet objet pour rendre possible ou non l'undo/redo
    // j'entends par l� griser leurs boutons dans l'interface s'il est impossible de les faire


public:
    // On est oblig�s d'allouer d�s le d�part de la m�moire, si l'on veut utiliser, par exemple, tabPile[i]
    Gardien() : tabPile(QVector<Pile*>(200)), current(-1) {}
    ~Gardien();
    void addMemento(Pile* aPile);
    Pile* undo();
    Pile* redo();
    //virtual void execute();

};



#endif // MEMENTO_H
