
#ifndef PILE_H
#define PILE_H


/**
 * \file       pile.h
 * \author	 Letellier/Yassine
 * \brief      Fichier contenant la d�finition de la clase pile
 */

//#include <QStack>


#include "donnee.h"
class Gardien;


/**
 * \class     Pile
 * \brief      C'est une simple Impl�mentation de std::stack<Donnee *> 
 *
 * \details    La fonction stack n'a pas �t� utilis�e car des fonctions vitales n'auraient pu etre impl�ment�es.
 */
class Pile//: public QStack<Donnee*>
{
    Donnee** tab; /*!< Tableau de pointeurs sur Donnee, contient les objets de la pile */
    int sommet;/*!< Num�ro de la case contenant le dernier �l�ment ajout�*/
    int nbMax;/*!< Taille maximale du tableau */
    Gardien* gard; /*!< Pointeur de Gardien permettant d'assurer undo/redo */
    // Attention, v�rifier que le gardien soit sauvegard� quand on quitte/relance le programme
    // Ou alors qu'on lui en refasse un nouveau!


public:

/**
 * \brief       Constructeur de pile � partir d'un unsigned int
 *
 * \param   n       Il s'agit de la taille maximale voulue pour la pile
 * \return   Elle retourne la pile construite.
 */
    Pile(unsigned int n=100);

/**
 * \brief       Constructeur de recopie de piler
 *
 * \param   p     Une r�f de pile depuis laquelle recopiait la nouvelle pile.
 * \return   Elle retourne la pile construite.
 */
    Pile(const Pile& p);
	
/**
 * \brief        Desctruteur de pile qui desalloue toute la m�moire

 */
    ~Pile();
	
/**
 * \brief       Accesseur nombre d'objet dans pile.
 *
 * \return   Retourne le nombre d'objet dans la pile
 */
    int size() {return sommet+1;}
	
/**
 * \brief       Accesseur sur le tableau de donn�e
 *
 * \return   Retourne le tableau de donn�e de la pile
 */
    Donnee** getTab() const {return tab;}
	

/**
 * \brief       Accesseur sur sommet de la pile
 *
 * \return   Retourne l'indice du sommet de pile
 */
    int getSommet() const {return sommet;}
	
/**
 * \brief       Modificateur du gardien de la pile
 *
 * \param    aGardien  Le gardien que l'on veux assigner � la pile
 */
    void setGardien(Gardien* aGardien) {gard = aGardien;}
	
/**
 * \brief       Accesseur sur le gardien de la pile
 *
 * \return   Retourne le gardien de la pile
 */
    Gardien* getGardien() const {return gard;}


    /**
    * \fn void empiler(Donnee* aDonnee);
    * \brief Fonction : Empiler un objet sur la pile
    *
    * \param aDonnee pointeur vers l'objet � empiler
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
    bool pileVide() const;

    /**
    * \fn bool pilePleine()
    * \brief Fonction : Tester si la pile est pleine
    *
    * \return true si la pile est pleine et false si la pile est non-pleine
    */
    bool pilePleine() const;

    /**
    * \fn void clear()
    * \brief Fonction : Vider la pile
    */
    void clear();
/**
 * \brief       M�hode permettant de cloner la pile
 *
 * \return   Retourne le clone de this.
 */
    Pile* cloner() const;
	
/**
 * \brief       Echange de deux �l�ments de la pile
 *
 * \param nb1   Place dans tab du premier �l�ment
  * \param nb2   Place dans tab du deuxi�me �l�ment
 */
    void swap(int nb1,int nb2);
	
	
/**
 * \brief       effectue la somme des donnee de la pile sur n �tage et empile le r�sultat.
 *
 * \param nb   Le nombre d'�tage qu'il faudra sommer.
 */
    void sum(unsigned int nb);
	
	
/**
 * \brief       effectue la moyenne des donnee de la pile sur n �tage et empile le r�sultat.
 *
 * \param nb   Le nombre d'�tage qu'il faudra moyenner.
 */
    void mean(unsigned int nb);
	
/**
 * \brief       Duplique le sommet de la pile.
 *
 */
    void dup();
	
	
/**
 * \brief       Supprime le sommet de la pile.
 *
 */
    void drop();
};



#endif // PILE_H
