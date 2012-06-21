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
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + t->toQString() + op + ' ' + "pow '";
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::mod(Donnee * t){
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + t->toQString() + op + ' ' + "mod '";
    return new ConstanteExp(exp);
}

// ConstanteExp? Pas Donnee?
ConstanteExp* ConstanteExp::sign()
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + op + ' ' + "sign '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::mySin(int typeAngle)
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + op + ' ' + "sin '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myCos(int typeAngle)
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + op + ' ' + "cos '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myTan(int typeAngle)
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + op + ' ' + "tan '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::mySinh(int typeAngle)
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + op + ' ' + "sinh '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myCosh(int typeAngle)
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + op + ' ' + "cosh '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}

Donnee* ConstanteExp::myTanh(int typeAngle)
{
    QString op= chaine.at(chaine.size()-1);
    QString exp = exp.remove(chaine.size()-1,chaine.size()-1) + ' ' + op + ' ' + "tanh '";
    // Op�rateur unaire : pas s�r du tout!
    return new ConstanteExp(exp);
}
