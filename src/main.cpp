#include<iostream>
#include <list>
#include <string>
#include "Train.hpp"

using namespace std;

int main() {
    list<Trajet*> parcours;
    Trajet *trajet(0);
    
    // Paris est la ville de départ
    trajet = new Trajet("Paris", 'd', "12h37", "");
    parcours.push_back(trajet);

    // Un arrêt sera marqué à Lyon
    trajet = new Trajet("Lyon", 'a', "", "14h40");
    parcours.push_back(trajet);

    // MArseille est le terminus
    trajet = new Trajet("Marseille", 't', "", "16h02");
    parcours.push_back(trajet);

    Train *train = new Train(2734, parcours);

    // Parcourir la liste des trajets et informer les passagers
    for (auto it = parcours.cbegin(); it != parcours.cend(); it++)
    {
        if ((*it)->getPosition() == 'd')
        {
            cout << "\n***\n\nBienvenue à bord du train n° " << train->getNumero() << ". Le départ est prévu à " << (*it)->getHeureDepart() << ".\n";
        } else if ((*it)->getPosition() == 'a')
        {
            cout << "\nIl marquera un arret à : \n";
            cout << "\t" << (*it)->getGare() << " à " << (*it)->getHeureArrivee() << "\n";
        } else
        {
            cout << "L'arrivée à " << (*it)->getGare() << " est prévue à " << (*it)->getHeureArrivee() << ".\n"<< endl;
        }
        
    }
    cout << "***\n\n" << endl;
    delete trajet;
    delete train;

}