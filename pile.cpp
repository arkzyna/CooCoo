#include "pile.h"

// Initialisation du membre statique du singleton
Pile* Pile::instance = 0;

Pile::~Pile()
{
    for(unsigned int i=0; i<=sommet; ++i)
        delete tab[i];
    delete[] tab;
}


Pile *Pile::getInstance()
{
    if (!instance) instance = new Pile;
    return instance;
}

void Pile::libereInstance()
{
    if (instance) delete instance;
}

void Pile::empiler(Donnee* aDonnee)
{
    if ( pilePleine() )
    {
        nbMax += 10;
        Donnee** newtab = new Donnee*[nbMax];
        for (unsigned int i=0; i<=sommet; i++) newtab[i] = tab[i];

        delete[] tab;
        tab = newtab;
    }
    sommet++;
    tab[sommet] = aDonnee;
}

Donnee* Pile::depiler()
{
    if (!pileVide())
    {
        sommet--;
        return tab[sommet+1];
    }
    // Sinon, glisser une exception?
}


bool Pile::pileVide()
{
    return(sommet==-1);
}

bool Pile::pilePleine()
{
    return(sommet==nbMax-1);
}

void Pile::clear(){
    if(!pileVide()){
        for(unsigned int i=0; i<=sommet; ++i)
            delete tab[i];
        sommet=-1;
    }
}
/*
Pile& Pile::cloner() const{
    Pile *p=new Pile(nbMax);
    for(int i=0; i<sommet; i++){
       // p->empiler(type_factory::getInstance().getType(at(i)->toQString()));
    }
    p->setgardien(this->getgardien());
    return *p;
}
*/

void Pile::swap(const unsigned int x, const unsigned int y){
    if (x < this->sommet && y < this->sommet){
        Donnee* tmp = (tab[sommet-x]);
        this->tab[sommet-x]=tab[sommet-y];
        this->tab[sommet-y]=tmp;
    }
}
/* Marche pas car il faut implementer les op�rateurs
void Pile::sum(const unsigned int x){
    if(!pileVide()){
        Donnee* res;
        *res=0;
        for(unsigned int i=0; i<x; i++){
            *res=*res+(*tab[sommet-i]);
        }
        empiler(res);
    }
}

void Pile::mean(const unsigned int x){
    if(!pileVide()){
            Donnee* res;
            *res=0;
            for(unsigned int i=0; i<x; i++){
                *res=*res+(*tab[sommet-i]);
            }
            int taille=sommet+1;
            res=*res/taille;
            empiler(res);
    }
}
*/

void Pile::dup(){
    empiler(tab[sommet]);
}

void Pile::drop(){
    if(!pileVide()){
        depiler();
    }
}

