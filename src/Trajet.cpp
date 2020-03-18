#include "Trajet.hpp"
#include <iostream>

using namespace std;

Trajet::Trajet() {}

Trajet::Trajet(string g, char p, string d, string a): gare(g), position(p), heureDepart(d), heureArrivee(a) {}

Trajet::~Trajet() {}

string Trajet::getGare() {
    return gare;
}

string Trajet::getHeureArrivee() {
    return heureArrivee;
}

string Trajet::getHeureDepart() {
    return heureDepart;
}

char Trajet::getPosition() {
    return position;
}