
#include "rationnel.h"
#include <sstream>
#include <cmath>
#include "entier.h"
#include "reel.h"
#include "fabriquedonnee.h"

QString Rationnel::toQString() const
{
    QString resNum, resDenom, res;
    resNum.setNum(num);
    resDenom.setNum(denom);
    res = resNum + "/" + resDenom;
    return res;
}

Rationnel::Rationnel(const Entier* aEntier)
{
    num = aEntier->getValeur();
    denom = 1;
}

Rationnel::Rationnel(const Reel* aReel)
{
    QStringList chaine = QString::aReel->toQString().split(".");
    QString x("1");
    for(int i=0; i<chaine[1].length(); i++)
    x += "0";
    num=aReel*x;
    denom=x.toInt();
    float p=pgcd(num, denom);
    num/=p;
    denom/=p;

}



int Rationnel::pgcd(int a, int b) const {
    if (a==0||b==0) return 0;
    if (a<0) a=-a;
    if (b<0) b=-b;
    while(a!=b){
        if (a>b) a=a-b; else b=b-a;
    }
    return a;
}

// Puisque c'est une m�thode de la classe, pourquoi ne pas utiliser num et denom plut�t que a et b...?

void Rationnel::simplifier(){
    if (num==0) {
        denom=1; return;
    }
    if (denom==0) return;
    int p=pgcd(num,denom);
    num/=p;
    denom/=p;
    if (denom<0) {
        denom=-denom;
        num=-num;
    }
}

Rationnel::Rationnel(const Complexe* aComplexe)
{
    // Perte d'information
    Constante* tmp = aComplexe->getPRe();
    // Besoin de l'instance factory... Du coup include sale, mais bon.
    FabriqueDonnee* factory = FabriqueDonnee::getInstance();
    Rationnel* tmp2 = static_cast<Rationnel*>(factory->creerDonnee(tmp, "Rationnel"));
    // static_cast pour permettre la conversion Donnee* ==> Rationnel*
    // On est surs que �a sera un Rationnel*, puisqu'on le demande sp�cifiquement!
    num = tmp2->getNum();
    denom = tmp2->getDenom();
    delete tmp;
    delete tmp2;
}


/*
Rationnel::Rationnel(Complexe* aComplexe){
    if (dynamic_cast<Rationnel>(aComplexe->pRe)){
        num=aComplexe->pRe->num;
        denum=aComplexe->pRe->denum;
    }
    else {
        num=Entier(aComplexe->pRe);
        denum=1;
        simplifier();
    }
}
*/
