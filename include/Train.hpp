#ifndef TRAIN_HPP
#define TRAIN_HPP

#include <iostream>
#include <list>
#include "Trajet.hpp"

class Train
{
protected:
    int numero;
    std::list<Trajet*> parcours;
    int energie; // Electricité ou Gasoil (Diesel)

public:
    Train();
    Train(int numero, std::list<Trajet*> parcours);
    virtual ~Train();

    int getNumero();
    std::list<Trajet*> getParcours() const;
    virtual void setEnergie(int energie);
    virtual int getEnergie() const;
    virtual void afficherEnergie() const;

};


#endif