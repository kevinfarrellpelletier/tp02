#include "elementfacturable.h"

ElementFacturable::ElementFacturable() {
    montant = 0;
    nom = "";
}

ElementFacturable::~ElementFacturable() {}

ElementFacturable::ElementFacturable(const std::string nom) {
    this->nom = nom;
}

std::string ElementFacturable::getNom() const { 
    return nom; 
}

double ElementFacturable::getMontant() const { 
    return montant; 
}
    