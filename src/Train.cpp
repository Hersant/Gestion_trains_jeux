#include "Train.hpp"

using namespace std;

Train::Train() {}

Train::~Train() {}

Train::Train(int num, list<Trajet*> p) : numero(num), parcours(p) {}

int Train::getNumero() {
    return numero;
}

list<Trajet*> Train::getParcours() const {
    return parcours;
}

void Train::setEnergie(int e) {
    if (e < 0)
        energie = 0;
    else
        energie = e;
}

int Train::getEnergie() const {
    return energie;
}

void Train::afficherEnergie() const {
    cout << "Methode du parent." << endl;
}