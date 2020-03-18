#include "Train.hpp"

using namespace std;

Train::Train() {}

Train::~Train() {}

Train::Train(int num, list<Trajet*> p) : numero(num), parcours(p) {}

int Train::getNumero() {
    return numero;
}

list<Trajet*> Train::getParcours() {
    return parcours;
}