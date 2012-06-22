#ifndef CONSTANTEEXP_H
#define CONSTANTEEXP_H

/*!
* \file constanteExp.h
* \brief Definition de la classe des constantes expression.
* \author Letellier/Yassine
*/

#include "donnee.h"

/**
 * \class     ConstanteExp
 * \author    Letellier/Yassine
 * \brief       Classe regroupant les Constantes Expressions. Elle herite de Donnee.
 *
 * \details    Les objets de cette classe travaillent autour d'une chaine de caract�res.
 *              Celle-ci d�crit une expression.
 */
class ConstanteExp : public Donnee
{
    QString chaine; /*!< Chaine de caract�res repr�sentant une expression */
public:
    /**
     * \brief       Constructeur de ConstanteExp � partir d'une cha�ne de caract�res.
     *
     * \param   aQString       Cha�ne de caract�res � recopier.
     * \return   Elle retourne la ConstanteExp construite.
     */
    ConstanteExp(const QString& aQString) : chaine(aQString) {}

    /**
     * \brief       Renvoie l'expression sous forme de chaine de caract�res.
     *
     * \return   La chaine de caract�res contenant l'expression est retourn�e.
     */
    virtual QString toQString() const {return chaine;}

    /*!
    * \brief Operateur +
    *
    * Implementation de l'op�rateur binaire + (methode virtuelle dans la classe mere)
    * \param t : Pointeur sur un type
    * \return Pointeur sur type, resultat de l'operation
    *
    */
    Donnee* operator+(Donnee* t);

    /*!
    * \brief Operateur /
    *
    * Implementation de l'op�rateur binaire / (methode virtuelle dans la classe mere)
    * \param t : Pointeur sur un type
    * \return Pointeur sur type, resultat de l'operation
    *
    */
    Donnee* operator/(Donnee * t);

    /*!
    * \brief Operateur *
    *
    * Implementation de l'op�rateur binaire * (methode virtuelle dans la classe mere)
    * \param t : Pointeur sur un type
    * \return Pointeur sur type, resultat de l'operation
    *
    */
    Donnee* operator*(Donnee * t);

    /*!
    * \brief Operateur -
    *
    * Implementation de l'op�rateur binaire - (methode virtuelle dans la classe mere)
    * \param t : Pointeur sur un type
    * \return Pointeur sur type, resultat de l'operation
    *
    */
    Donnee* operator-(Donnee * t);

    /*!
    * \brief puissance
    *
    * Implementation de l'op�rateur binaire puissance (methode virtuelle dans la classe mere)
    * \param Donnee*: Pointeur sur une donnee
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* puissance(Donnee* t);

    /*!
    * \brief mod
    *
    * Implementation de l'op�rateur binaire modulo (methode virtuelle dans la classe mere)
    * \param Donnee*: Pointeur sur une donnee
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* mod(Donnee* t); 

    /*!
    * \brief Accesseur vers l'attribut chaine.
    *
    * \return Une QString recopi�e depuis l'attribut chaine.
    *
    */
    QString getChaine()const{return chaine;}

    /**
     * \brief      Concat�ne l'op�rateur unaire sign() avec l'expression.
     *
     * \return   Elle retourne le nouvel objet.
     */
    virtual ConstanteExp* sign();

    /*!
    * \brief mySin
    *
    * Implementation de l'op�rateur unaire sinus (methode virtuelle dans la classe mere)
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* mySin(int typeAngle);

    /*!
    * \brief myCos
    *
    * Implementation de l'op�rateur unaire cosinus (methode virtuelle dans la classe mere)
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myCos(int typeAngle);

    /*!
    * \brief myTan
    *
    * Implementation de l'op�rateur unaire tangente (methode virtuelle dans la classe mere)
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myTan(int typeAngle);

    /*!
* \brief mySinh
*
* Implementation de l'op�rateur unaire sinush (methode virtuelle dans la classe mere)
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* mySinh(int typeAngle);

    /*!
* \brief myCosh
*
* Implementation de l'op�rateur unaire cosinush (methode virtuelle dans la classe mere)
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myCosh(int typeAngle);

    /*!
* \brief myTanh
*
* Implementation de l'op�rateur unaire tangenteh (methode virtuelle dans la classe mere)
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myTanh(int typeAngle);

    /*!
    * \brief myLn
    *
    * Implementation de l'op�rateur unaire ln (methode virtuelle dans la classe mere)
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myLn();

    /*!
    * \brief myLog
    *
    * Implementation de l'op�rateur unaire log (methode virtuelle dans la classe mere)
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myLog();

    /*!
* \brief myInv
*
* Implementation de l'op�rateur unaire inv (methode virtuelle dans la classe mere)
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myInv();

    /*!
* \brief mySqrt
*
* Implementation de l'op�rateur unaire sqrt (methode virtuelle dans la classe mere)
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* mySqrt();

    /*!
* \brief mySqr
*
* Implementation de l'op�rateur unaire sqr (methode virtuelle dans la classe mere)
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* mySqr();

    /*!
* \brief myCube
*
* Implementation de l'op�rateur unaire Cube (methode virtuelle dans la classe mere)
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myCube();

    /*!
* \brief myFact
*
* Implementation de l'op�rateur unaire fact (methode virtuelle dans la classe mere)
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myFact();
    /*!
* \brief isZero
*
* Mathode permettant de savoir si la Donnee est egale � 0
* \return bool true si la Donnee est egale � 0
*
*/
    bool isZero(){
        return false;
    }
    /*!
* \brief isNeg
*
* Mathode permettant de savoir si la Donnee est inferieure ou egale � 0
* \return bool true si la Donnee est inferieur ou egale � 0
*
*/
    bool isNeg(){
        return false;
    }


};

#endif // CONSTANTEEXP_H
