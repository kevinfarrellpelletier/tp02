#include "facture.h"

Facture::Facture() {}

Facture::~Facture()  {
    std::map<int, ElementFacturable*>::iterator iterateur = conteneur.begin();

    while (iterateur != conteneur.end()) {
        ElementFacturable* element = iterateur->second;
        delete element;
        iterateur++;
    }
    conteneur.clear();
}

void Facture::calculerTotal() {
    std::map<int, ElementFacturable*>::iterator iterateur = conteneur.begin();
    total = 0;

    while (iterateur != conteneur.end()) {
        iterateur->second->calculerMontant();
        total += iterateur->second->getMontant();
        iterateur++;
    }
}

void Facture::ajouterElementFacturable(ElementFacturable* element) {
    std::string nom = element->getNom();
    int type = getType(nom);

    if (conteneur.find(type) == conteneur.end()) {
        conteneur.insert(std::pair<int, ElementFacturable*>(type, element));
    }
    else {
        throw FacturableAlreadyAddedException(nom);
    }
}

void Facture::afficherFacture() {
    std::map<int, ElementFacturable*>::iterator iterateur = conteneur.begin();
    std::cout << std::endl << "FACTURE" << std::endl;

    while (iterateur != conteneur.end()) {
        std::cout << iterateur->first << ". " << iterateur->second->getNom() << ": " << iterateur->second->getMontant() << std::endl;
        iterateur++;
    }

    std::cout << "Total: " << total << std::endl;
}

int Facture::getType(const std::string nom) const {
    int type = 0;

    if (nom == "Nuitees") {
        type = 1;
    }
    else if (nom == "Repas") {
        type = 2;
    }
    else if (nom == "Spa") {
        type = 3;
    }
    else {
        type = 4;
    }
    return type;
}

double Facture::getTotal() const {
    return total;
}
