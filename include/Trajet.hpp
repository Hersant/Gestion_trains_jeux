#ifndef TRAJET_HPP
#define TRAJET_HPP

#include <iostream>
#include <list>

class Trajet
{
private:
    std::string gare; // Nom de la gare désservie
    char position; // d = gare de départ, a = simple arrêt, t = terminus
    std::string heureDepart; // Heure de départ
    std::string heureArrivee; // Heure d'arrivée

public:
    Trajet();
    Trajet(std::string gare, char position, std::string heureDepart = "", std::string heureArrivee = "");
    ~Trajet();

    std::string getGare();
    char getPosition();
    std::string getHeureDepart();
    std::string getHeureArrivee();
};

#endif