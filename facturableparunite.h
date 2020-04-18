#ifndef __FACTURABLEPARUNITE_H__
#define __FACTURABLEPARUNITE_H__
#include "elementfacturable.h"
#include "facturableinvalidquantityexception.h"

//!  Classe publique qui definit un Element Facturable par Unite
/*!
  Classe publique qui herite de la classe abstraite ElementFacturable
*/
class FacturableParUnite : public ElementFacturable {

    private:
        //! Variable privee
        /*!
          Donnee de type int.
          Represente le montant en dollars du prix unitaire associe a l'objet FacturableParUnite
        */
        int prix_unitaire;

        //! Variable privee
        /*!
        Donnee de type int.
          Represente la quantite de l'element a facturer
        */
        int quantite;

    public:
        //! Constructeur publique
        /*!
          Le Constructeur publique permet de creer un objet de type FacturableParUnite
          \param nom Valeur de type std::string representant le nom de l'element
          \param prix_unitaire Valeur de type int representant le prix unitaire en dollars de l'element
          \param quantite Valeur de type std::string representant la quantite de l'element a facturer
          \throws FacturableInvalidQuantityException si la quantite est inferieure ou egale a zero
        */
        FacturableParUnite(const std::string nom, const int prix_unitaire, const int quantite);

        //! Destructeur publique par defaut
        /*!
          Le Destructeur publique par defaut.  Prend en charge la destruction de cette classe
        */
        ~FacturableParUnite();

        //! Methode publique
        /*!
          Cette methode implemente la definition de la methode declaree dans la classe mere.
          Calcule le total (prix_unitaire * quantite)
          Ajoute la taxe au total ((total * 8%) + (total * 5%) + total) et store le tout dans la variable 'montant'
        */
        void calculerMontant();
};
#endif //__FACTURABLEPARUNITE_H__

