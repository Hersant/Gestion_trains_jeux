#ifndef TRAIN_HPP
#define TRAIN_HPP

#include <iostream>
#include <list>
#include "Trajet.hpp"

class Train
{
private:
    int numero;
    std::list<Trajet*> parcours;

public:
    Train();
    Train(int numero, std::list<Trajet*> parcours);
    ~Train();

    int getNumero();
    std::list<Trajet*> getParcours();
};


#endif