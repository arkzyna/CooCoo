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
    Complexe(const typeMembre& aTypeMembre1, const typeMembre& aTypeMembre2) : pRe(aTypeMembre1), pIm(aTypeMembre2) {}
    virtual const string afficher() const
    {
        ostringstream oss;
        oss << pRe.afficher() << " + " << pIm.afficher() << " i";
        return oss.str();
    }
};

#endif // COMPLEXE_H
