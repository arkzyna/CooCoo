#include "constanteexp.h"
#include <iostream>

Donnee* ConstanteExp::operator +(Donnee * t){
    std::cout<<"rentr�"<<std::endl;
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + ' ' + t->toQString() + " + '";
    std::cout<<"chaine construite"<<std::endl;
    std::cout<<exp.toStdString()<<std::endl;
    Donnee * res=new ConstanteExp(exp);
    return res;
}

Donnee* ConstanteExp::operator -(Donnee * t){
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + ' ' + t->toQString() + " - '";
    return new ConstanteExp(exp);
}


Donnee* ConstanteExp::operator *(Donnee * t){
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + ' ' + t->toQString() + " * '";
    return new ConstanteExp(exp);
}


Donnee* ConstanteExp::operator /(Donnee * t){
    std::cout<<"dans div"<<std::endl;
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + ' ' + t->toQString() + " / '";
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::puissance(Donnee * t){
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + ' ' + t->toQString() + " pow '";
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::mod(Donnee * t){
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + ' ' + t->toQString() + " mod '";
    return new ConstanteExp(exp);
}

// ConstanteExp? Pas Donnee?
ConstanteExp* ConstanteExp::sign()
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + " sign '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::mySin(int typeAngle)
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + " sin '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myCos(int typeAngle)
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1)  + " cos '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myTan(int typeAngle)
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1)  + " tan '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::mySinh(int typeAngle)
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + " sinh '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myCosh(int typeAngle)
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) +  " cosh '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myTanh(int typeAngle)
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) +  " tanh '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myLn()
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) +  " ln '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myLog()
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) +  " log '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myInv()
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) +  " inv '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::mySqrt()
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) +  " sqrt '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::mySqr()
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) +  " sqr '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myCube()
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) + " cube '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myFact()
{
    QString exp = chaine.remove(chaine.size()-1,chaine.size()-1) +  " fact '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}
