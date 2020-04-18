#ifndef __FACTURE_H__
#define __FACTURE_H__
#include "elementfacturable.h"
#include "facturablealreadyaddedexception.h"
#include <map>
#include <iostream>
#include <iterator>

//!  Classe publique qui definit un Element Facturable par Unite
/*!
  Classe publique definissant un Facture a utiliser dans le contexte d'un programme simulant la generation d'une Facture d'Hotel
*/
class Facture {

    private:
        //! Variable privee
        /*!
          Conteneur de type map servant a storer des pointeurs vers des elements Facturable et de les associer a des cles
        */
        std::map<int, ElementFacturable*> conteneur;

        //! Variable privee
        /*!
          Donnee de type double.  Represente le montant en dollars total de la Facture
        */
        double total;

    public:
        //! Constructeur publique
        /*!
          Le Constructeur publique permet de creer un objet de type Facture
        */
        Facture();

        //! Destructeur publique par defaut
        /*!
          Le Destructeur publique par defaut.  Prend en charge la destruction de cette classe
        */
        ~Facture();

        //! Methode publique
        /*!
          Cette methode calcule le total d'un Facture.  
          Commence par reinitialiser le total de la facture a 0.
          Itere au travers du conteneur afin de calculer le montant de chaque element Facturable et de l'ajouter au total
        */
        void calculerTotal();

        //! Methode publique
        /*!
          Cette methode ajoute un pointeur vers un element Facturable au conteneur
          \throws FacturableAlreadyAddedException Leve l'exception si un element Facturable du même type a deja ete ajoute au conteneur
        */
        void ajouterElementFacturable(ElementFacturable* element);

        //! Methode publique
        /*!
          Cette methode affiche une Facture
          Itere au travers du conteneur afin d'afficher chaque element Facturable ainsi que son montant
        */
        void afficherFacture();

        /*!
          Cette methode permet d'obtenir le type d'un element Facturable contenu dans le conteneur de la Facture
          \param nom Donnee de type std::string representant le nom de l'element Facturable pour lequel on veut obtenir le type (cle associee du conteneur)
          \return Donnee de type int representant le nom d'un element Facturable (cle associee du conteneur)
        */
        int getType(const std::string nom) const;

        /*!
          Cette methode permet d'obtenir le total d'un facture
          \return Donnee de type double representant le montant en dollars total de la Facture
        */
        double getTotal() const;
};
#endif //__FACTURE_H__

