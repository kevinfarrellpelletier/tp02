#include "facturableinvalidquantityexception.h"

FacturableInvalidQuantityException::FacturableInvalidQuantityException(const std::string nom_facturable) {
    this->message = ("\n ***ERREUR***  LE FACTURABLE " + nom_facturable + " DOIT AVOIR UNE QUANTITEE SUPERIEURE A 0 \n");
}

const char* FacturableInvalidQuantityException::what() const noexcept {
    return (this->message.c_str());
}