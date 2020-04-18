#include "facturableparunite.h"

FacturableParUnite::FacturableParUnite(const std::string nom, const int prix_unitaire, const int quantite) : ElementFacturable(nom) {

    if (quantite <= 0) 
    {
        throw FacturableInvalidQuantityException(nom);
    }

    this->prix_unitaire = prix_unitaire;
    this->quantite = quantite;
}

FacturableParUnite::~FacturableParUnite() {}

void FacturableParUnite::calculerMontant() {
    montant = ((prix_unitaire * quantite) * 1.13);
}