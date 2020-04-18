#ifndef __FACTURABLEINVALIDQUANTITYEXCEPTION_H__
#define __FACTURABLEINVALIDQUANTITYEXCEPTION_H__
#include <stdexcept>
#include <string>

//!  Classe publique qui definit une Exception de type FacturableInvalidQuantityException
/*!
  Classe qui herite de std::exception.
  Permet de lancer (throw) une exception.
*/
class FacturableInvalidQuantityException : public std::exception {

    private:
        //! Variable privee
        /*!
          Donnee de type std::string representant le message a faire afficher par l'exception.
        */
        std::string message;

    public:
        //! Constructeur publique
        /*!
          Le Constructeur publique permet de creer un objet de type FacturableInvalidQuantityException
          \param nom_facturable Valeur de type std::string representant le nom de l'element facturable qui a genere l'erreur
        */
        FacturableInvalidQuantityException(const std::string nom_facturable);

        //! Methode publique
        /*!
          Cette methode permet d'obtenir le message de l'exception.
          Converti la variable "message" en char*
          \return Donnee de type char* representant le message de l'exception.
        */
        const char* what() const noexcept;
};
#endif //__FACTURABLEINVALIDQUANTITYEXCEPTION_H__

