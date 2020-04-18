#include "facturablefraisfixe.h"

FacturableFraisFixe::FacturableFraisFixe(const std::string nom, const int prix_fixe) : ElementFacturable(nom) {
    this->prix_fixe = prix_fixe;
}

FacturableFraisFixe::~FacturableFraisFixe() {}

void FacturableFraisFixe::calculerMontant()  {
    montant = (prix_fixe * 1.15);
}