
#ifndef PILE_H
#define PILE_H

/*!
* \file pile.h
* \author Letellier/Yassine
*/

//#include <QStack>


#include "donnee.h"
class Gardien;



class Pile//: public QStack<Donnee*>
{
    Donnee** tab; /*!< Tableau de pointeurs sur Donnee, contient les objets de la pile */
    int sommet;/*!< Num�ro de la case contenant le dernier �l�ment ajout�*/
    int nbMax;/*!< Taille maximale du tableau */
    Gardien* gard;
    // Attention, v�rifier que le gardien soit sauvegard� quand on quitte/relance le programme


public:
    Pile(unsigned int n=100);
    Pile(const Pile& p);
    ~Pile();

    int size() {return sommet+1;}
    Donnee** getTab() const {return tab;}
    int getSommet() const {return sommet;}
    void setGardien(Gardien* aGardien) {gard = aGardien;}


    /**
    * \fn void empiler(Donnee* aDonnee);
    * \brief Fonction : Empiler un objet sur la pile
    *
    * \param pointeur vers l'objet � empiler
    */

    void empiler(Donnee* aDonnee);

    /**
    * \fn Donnee* depiler()
    * \brief Fonction : D�piler la pile et renvoyer l'objet d�pil�
    *
    * \return pointeur vers l'objet d�pil�
    */
    Donnee* depiler();

    /**
    * \fn bool pileVide()
    * \brief Fonction : Tester si la pile est vide
    *
    * \return true si la pile est vide et false si la pile est non-vide
    */
    bool pileVide();

    /**
    * \fn bool pilePleine()
    * \brief Fonction : Tester si la pile est pleine
    *
    * \return true si la pile est pleine et false si la pile est non-pleine
    */
    bool pilePleine();

    /**
    * \fn void clear()
    * \brief Fonction : Vider la pile
    */
    void clear();

    Pile* cloner() const;
    void swap(int,int);
    void sum(unsigned int);
    void mean(unsigned int);
    void dup();
    void drop();

    // En profiter pour glisser un iterator? oui
};



#endif // PILE_H
