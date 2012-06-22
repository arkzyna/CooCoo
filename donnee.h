#ifndef DONNEE_H
#define DONNEE_H

/*!
* \file donnee.h
* \author Letellier/Yassine
*/

#include <QString>
#include <QRegExp>
#include "exceptionCooCoo.h"

using namespace std;

// ABSTRAITE

class Donnee
{
public:

    /**
     * \brief       Constructeur sans arguments de Donnee
     */
    Donnee() {}

    /**
     * \brief      M�thode permettant d'obtenir l'objet sous la forme d'une QString
     * \return   Elle retourne un Qstring tel qu'un entier puisse etre construit � partir de �a, ou affich�.
     */
    virtual QString toQString() const = 0; // M�thode virtuelle pure, red�finie � chaque fois, permet la conversion de la valeur en QString


    /*!
    * \brief Operateur +
    *
    * M�thode virtuelle pure pour l'op�rateur binaire +
    * \param t : Pointeur sur un type
    * \return Pointeur sur type, resultat de l'operation
    *
    */
    virtual Donnee* operator+(Donnee * t)=0;

    /*!
    * \brief Operateur /
    *
    * M�thode virtuelle pure pour l'op�rateur binaire /
    * \param t : Pointeur sur un type
    * \return Pointeur sur type, resultat de l'operation
    *
    */
    virtual Donnee* operator/(Donnee * t)=0;

    /*!
    * \brief Operateur *
    *
    * M�thode virtuelle pure pour l'op�rateur binaire *
    * \param t : Pointeur sur un type
    * \return Pointeur sur type, resultat de l'operation
    *
    */
    virtual Donnee* operator*(Donnee * t)=0;

    /*!
    * \brief Operateur -
    *
    * M�thode virtuelle pure pour l'op�rateur binaire -
    * \param t : Pointeur sur un type
    * \return Pointeur sur type, resultat de l'operation
    *
    */
    virtual Donnee* operator-(Donnee * t)=0;

    /*!
    * \brief puissance
    *
    * M�thode virtuelle pure pour l'op�rateur binaire puissance
    * \param Donnee*: Pointeur sur une donnee
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* puissance(Donnee* t)=0;

    /*!
    * \brief mod
    *
    * M�thode virtuelle pure pour l'op�rateur binaire modulo
    * \param Donnee*: Pointeur sur une donnee
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* mod(Donnee* t)=0;

    /**
     * \brief      Retourne une Donnee ayant les memes valeurs mais avec le signe invers�
     * \return   Elle retourne le rationnel construit (=-this).
     */
    virtual Donnee* sign()=0;

    /*!
    * \brief mySin
    *
    * M�thode virtuelle pure pour l'op�rateur unaire sinus
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* mySin(int typeAngle)=0;

    /*!
    * \brief myCos
    *
    * M�thode virtuelle pure pour l'op�rateur unaire cosinus
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myCos(int typeAngle)=0;

    /*!
    * \brief myTan
    *
    * M�thode virtuelle pure pour l'op�rateur unaire tangente
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myTan(int typeAngle)=0;

    /*!
* \brief mySinh
*
* M�thode virtuelle pure pour de l'op�rateur unaire sinush
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* mySinh(int typeAngle)=0;

    /*!
    * \brief myCosh
    *
    * M�thode virtuelle pure pour l'op�rateur unaire cosinush
        * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
        * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myCosh(int typeAngle)=0;

    /*!
* \brief myTanh
*
* M�thode virtuelle pure pour l'op�rateur unaire tangenteh
    * \param typeAngle : entier, 0 si utilisation des degres, 1 si utilisation des radians
    * \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myTanh(int typeAngle)=0;

    /*!
    * \brief myLn
    *
    * M�thode virtuelle pure pour l'op�rateur unaire ln
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myLn()=0;

    /*!
    * \brief myLog
    *
    * M�thode virtuelle pure pour l'op�rateur unaire log
    * \return Pointeur sur donnee, resultat de l'operation
    *
    */
    virtual Donnee* myLog()=0;

    /*!
* \brief myInv
*
* M�thode virtuelle pure pour l'op�rateur unaire inv
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myInv()=0;

    /*!
* \brief mySqrt
*
* M�thode virtuelle pure pour l'op�rateur unaire sqrt
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* mySqrt()=0;

    /*!
* \brief mySqr
*
* M�thode virtuelle pure pour l'op�rateur unaire sqr
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* mySqr()=0;

    /*!
* \brief myCube
*
* M�thode virtuelle pure pour l'op�rateur unaire Cube
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myCube()=0;

    /*!
* \brief myFact
*
* M�thode virtuelle pure pour l'op�rateur unaire fact
* \return Pointeur sur donnee, resultat de l'operation
*
*/
    virtual Donnee* myFact()=0;




    /*!
 * \brief isEntier
 * Methode statique permettant de determiner le type avec Qregexp
 * \param Qstring s, chaine de caractere source
 * \return true si la chaine est construite comme un entier
 */
    static bool isEntier(const QString& s){
        QRegExp rx("^-?\\d+$");
        return s.contains (rx);
    }

    /*!
* \brief isReel
* Methode statique permettant de determiner le type
* \param Qstring s, chaine de caractere source
* \return true si la chaine est construite comme  un reel
*/
    static bool isReel(const QString& s){
        QRegExp rx("^-?\\d*\\.?\\d*$");
        return s.contains(rx);}


    /*!
 * \brief isRationnel
 * Methode statique permettant de determiner le type (Utiisation de regexp)
 * \param Qstring s, chaine de caractere source
 * \return true si la chaine ressemble a un rationnel,
 * false sinon
 */
    static bool isRationnel(const QString& s){
        QRegExp rx("^-?\\d*/-?\\d*$");
        return s.contains (rx);
    }


    /*!
* \brief isExpression
* Methode statique permettant de determiner le type
* \param Qstring s, chaine de caractere source
* \return true si la chaine ressemble a une expression
*/
    static bool isExpression(const QString& s){
        return s.count("'")==2;
    }

    /*!
* \brief isComplexe
* Methode statique permettant de determiner le type
* \param Qstring s, chaine de caractere source
* \return true si la chaine ressemble a un complexe,
* false sinon
*/
    static bool isComplexe(const QString& s){
        QRegExp rx("^-?\\d+((/|\\.)\\d+)?\\$-?\\d+((/|\\.)\\d+)?$");
        return s.contains (rx);
    }
    /*!
* \brief isZero
*
* M�thode permettant de savoir si la Donnee est egale � 0
* \return bool true si la Donnee est egale � 0
*
*/
    virtual bool isZero()=0;
    /*!
* \brief isNeg
*
* M�thode permettant de savoir si la Donnee est inferieure ou egale � 0
* \return bool true si la Donnee est inferieur ou egale � 0
*
*/
    virtual bool isNeg()=0;


};

#endif // DONNEE_H
