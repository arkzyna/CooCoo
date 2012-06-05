#ifndef COMPLEXE_H
#define COMPLEXE_H

#include "donnee.h"
#include <sstream>

// Classe template : permet de s'assurer que la partie r�elle et la partie imaginaire sont du m�me type

template <typename typeMembre> class Complexe : public Donnee
{
    typeMembre pRe;
    typeMembre pIm;
public:
    // Complexe : plut�t le construire avec une QString!
    // Le seul int�r�t de stocker sous valeur num�rique est pour faire les calculs.
    // Tout le reste, les entr�es, les sorties, c'est du QString!
    Complexe(const QString& aQString = "0$0")
    {
        // En attendant de trouver comment parser, je mets des valeurs factices pour pouvoir compiler
        pRe = typeMembre("0");
        pIm = typeMembre("0");
    }

    virtual QString toQString() const
    {
        QString res = pRe.toQString() + "$" + pIm.toQString();
        return res;
    }
};

#endif // COMPLEXE_H
