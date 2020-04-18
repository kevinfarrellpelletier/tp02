#ifndef __MENUSINTERACTIONFACTURE_H__
#define __MENUSINTERACTIONFACTURE_H__
#include <iostream>
#include <string>
#include "facture.h"
#include "facturableparunite.h"
#include "facturablefraisfixe.h"
#include "facturableinvalidquantityexception.h"
#include "facturablealreadyaddedexception.h"    

//!  Classe publique qui definit des fonctionalites de Menu et leur utilisation.
/*!
  Classe publique definissant un Menu pour interfacer avec l'utilisateur dans le contexte d'un programme simulant une Facture d'un Hotel.
  Contient des fonctions pour interagir avec l'Utilisateur.
*/
class MenusInteractionFacture {

    public:
        //! Methode publique
        /*!
          Cette methode affiche le menu contenant les options principales du programme
        */
        static void afficherMenuPrincipal();

        //! Methode publique
        /*!
          Cette methode affiche le menu contenant les options principales d'ajoût d'une nuitee
        */
        static void afficherMenuNuitee();

        //! Methode publique
        /*!
          Cette methode affiche le menu contenant les options principales d'ajoût d'un repas
        */
        static void afficherMenuRepas();

        //! Methode publique
        /*!
          Cette methode represente un menu interactif pour l'ajoût de nuitees a une Facture
        */
        static void menuNuitees(Facture* facture);

        //! Methode publique
        /*!
          Cette methode represente un menu interactif pour l'ajoût de nuitees a une Facture
        */
        static void menuRepas(Facture* facture);

        //! Methode publique
        /*!
          Cette methode prend en charge l'ajoût de l'option Spa a une Facture
        */
        static void menuSpa(Facture* facture);

        //! Methode publique
        /*!
          Cette methode prend en charge l'ajoût de l'option Gym a une Facture
        */
        static void menuGym(Facture* facture);

        //! Methode publique
        /*!
          Cette methode prend en charge l'affichage d'une Facture
        */
        static void menuAfficher(Facture* facture);

        //! Methode publique
        /*!
          Cette methode permet de saisir le choix de l'utilisateur dans une interaction.
          Boucle jusqu'a ce qu'un int valide soit saisi
          \param *display Pointeur vers une fonction d'affichage qui represente les options a presenter a l'utilisateur
        */
        static int lireChoix(void(*display)());
};
#endif //__MENUSINTERACTIONFACTURE_H__

