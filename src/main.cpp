#include<iostream>
#include <list>
#include <string>
#include "TrainElectrique.hpp"
#include "TrainDiesel.hpp"
#include "TrainPassagers.hpp"

using namespace std;

void afficherParcours(Train *train, list<Trajet*> parcours) {
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
}

int main() {
    list<Trajet*> parcours;
    Trajet *trajet(0);
    Train * train(0);
    
    // Paris est la ville de départ
    trajet = new Trajet("Paris", 'd', "12h37", "");
    parcours.push_back(trajet);

    // Un arrêt sera marqué à Lyon
    trajet = new Trajet("Lyon", 'a', "", "14h40");
    parcours.push_back(trajet);

    // MArseille est le terminus
    trajet = new Trajet("Marseille", 't', "", "16h02");
    parcours.push_back(trajet);

    //Train *train = new Train(2734, parcours);
    train = new TrainElectrique(2734, parcours, 25000);

    // Parcourir la liste des trajets et informer les passagers
    afficherParcours(train, parcours);
    train->afficherEnergie();

    // Train diesel
    TrainPassagers * trainDiesel = new TrainPassagers(2340, parcours, 10);
    trainDiesel->setNbPassagers(34);
    afficherParcours(trainDiesel, parcours);
    trainDiesel->afficherUsage();
    trainDiesel->afficherEnergie();

    delete trajet;
    delete train;
    delete trainDiesel;

}