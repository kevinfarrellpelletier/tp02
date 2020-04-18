#ifndef __FACTURABLEFRAISFIXE_H__
#define __FACTURABLEFRAISFIXE_H__
#include "elementfacturable.h"

//!  Classe publique qui definit un Element Facturable par Frais Fixe
/*!
  Classe publique qui herite de la classe abstraite ElementFacturable
*/
class FacturableFraisFixe : public ElementFacturable {

    private:
        //! Variable privee
        /*!
          Donnee de type int.
          Represente le montant en dollars du prix fixe associe a l'objet FacturableFraisFixe
        */
        int prix_fixe;

    public:
        //! Constructeur publique
        /*!
          Le Constructeur publique permet de creer un objet de type FacturableFraisFixe
          \param nom Valeur de type std::string representant le nom de l'element
          \param prix_fixe Valeur de type int representant le prix fixe en dollars de l'element 
        */
        FacturableFraisFixe(const std::string nom, const int prix_fixe);

        //! Destructeur publique par defaut
        /*!
          Le Destructeur publique par defaut.  Prend en charge la destruction de cette classe
        */
        ~FacturableFraisFixe();

        //! Methode publique
        /*!
          Cette methode implemente la definition de la methode declaree dans la classe mere.  
          Ajoute la taxe au prix fixe ((prix_fixe * 8%) + (prix_fixe * 7%) + prix_fixe) et store le tout dans la variable 'montant'
        */
        void calculerMontant();
};
#endif //__FACTURABLEFRAISFIXE_H__

