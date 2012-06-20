#include "memento.h"
#include "pile.h"


void Gardien::addMemento(Pile* aPile)
{
    /*
    tabPile.push_back(aPile->cloner());
    current++;
    */
    // Analyser l'enchainement, comportement suite � plusieurs annulations/restaurations
    // A essayer : simplement �craser la prochaine valeur, mais penser � la supprimer SI CE N'EST PAS LA MEME!
    current++;
    tabPile[current] = aPile->cloner();
    // Dangereux? Pas de risque de probl�me d'allocation?
}

Pile* Gardien::undo()
{
    if(current > -1)
    {
        Pile* res = tabPile[current]->cloner();
        current--;
        return res;
    }
    return 0; // NULL
    // G�rer le cas de pile vide, ce qu'il doit renvoyer!
    // C'est la fonction appelante qui devra v�rifier si elle n'obtient pas 0!
}

Pile* Gardien::redo()
{
    if (current < tabPile.size())
    {
        current++;
        return tabPile[current]->cloner();
    }
    return 0;   // Idem qu'au dessus
}

/*
void Gardien::execute(Pile p){
    tabPile.append(p.clone);
    curPile++;

}

*/

