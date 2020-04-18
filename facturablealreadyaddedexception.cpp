#include "facturablealreadyaddedexception.h"

FacturableAlreadyAddedException::FacturableAlreadyAddedException(const std::string nom_facturable) {
    this->message = ("\n ***ERREUR***  LE FACTURABLE " + nom_facturable + " EXISTE DEJA DANS LA FACTURE \n");
}

const char* FacturableAlreadyAddedException::what() const noexcept {
    return (this->message.c_str());
}