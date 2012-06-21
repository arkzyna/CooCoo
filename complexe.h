#ifndef COMPLEXE_H
#define COMPLEXE_H

/*!
* \file complexe.h
* \author Letellier/Yassine
*/

#include "constante.h"
#include <sstream>

class Entier;
class Reel;
class Rationnel;

class Complexe : public Donnee
{
    Constante* pRe;
    Constante* pIm;
public:

    Complexe(const Donnee* donneeDepart, int typeSouhaite);
    Complexe(Constante* D1=0, Constante* D2=0) : pRe(D1), pIm(D2) {}
    Complexe(const Complexe* aComplexe);
    Complexe(const Entier* aEntier);
    Complexe(const Reel* aReel);
    Complexe(const Rationnel* aRationnel);
    Complexe(const QString &s);


    ~Complexe() {delete pRe; delete pIm;}

    virtual QString toQString() const
    {
        QString res = pRe->toQString() + "$" + pIm->toQString();
        return res;
    }

    Constante* getPRe() const {return pRe;}
    Constante* getPIm() const {return pIm;}
    Donnee* conj();


    Donnee* operator+(Donnee * t);

    Donnee* operator/(Donnee * t);
    Donnee* operator*(Donnee * t);
    Donnee* operator-(Donnee * t);

    Complexe* sign(){
        Complexe* res=new Complexe(pRe->sign(),pIm->sign());
        return res;}

    virtual Donnee* puissance(Donnee* t)
    {throw ExceptionCooCoo("Pas de calcul de puissance avec un complexe : non g�r�");}
    virtual Donnee* mod(Donnee* t)
    {throw ExceptionCooCoo("Pas de calcul de mod avec un complexe : non g�r�.");}

    virtual Donnee* mySin(int typeAngle)
    {throw ExceptionCooCoo("Pas de calcul de sin avec un complexe : non g�r�.");}
    virtual Donnee* myCos(int typeAngle)
    {throw ExceptionCooCoo("Pas de calcul de cos avec un complexe : non g�r�.");}
    virtual Donnee* myTan(int typeAngle)
    {throw ExceptionCooCoo("Pas de calcul de tan avec un complexe : non g�r�.");}
    virtual Donnee* mySinh(int typeAngle)
    {throw ExceptionCooCoo("Pas de calcul de sinh avec un complexe : non g�r�.");}
    virtual Donnee* myCosh(int typeAngle)
    {throw ExceptionCooCoo("Pas de calcul de cosh avec un complexe : non g�r�.");}
    virtual Donnee* myTanh(int typeAngle)
    {throw ExceptionCooCoo("Pas de calcul de tanh avec un complexe : non g�r�.");}
    virtual Donnee* myLn()
    {throw ExceptionCooCoo("Pas de calcul de ln avec un complexe : non g�r�.");}
    virtual Donnee* myLog()
    {throw ExceptionCooCoo("Pas de calcul de log avec un complexe : non g�r�.");}
    virtual Donnee* myInv()
    {throw ExceptionCooCoo("Pas de calcul de inv avec un complexe : non g�r�.");}
    virtual Donnee* mySqrt()
    {throw ExceptionCooCoo("Pas de calcul de sqrt avec un complexe : non g�r�.");}

    virtual Donnee* mySqr();
    virtual Donnee* myCube();


    virtual Donnee* myFact()
    {throw ExceptionCooCoo("Pas de calcul de fact avec un complexe : non g�r�.");}


};

#endif // COMPLEXE_H
