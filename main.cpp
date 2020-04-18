#include <iostream>
#include "menusinteractionfacture.h"

//!  Classe contenant le main()
/*!
  Execute le programme principal
*/
int main() {

    bool execution = true;
    int choix = 0;
    Facture* facture = new Facture();

    while (execution) {
        choix = MenusInteractionFacture::lireChoix(MenusInteractionFacture::afficherMenuPrincipal);

        switch (choix) {
        case 1:
            MenusInteractionFacture::menuNuitees(facture);
            break;
        case 2:
            MenusInteractionFacture::menuRepas(facture);
            break;
        case 3:
            MenusInteractionFacture::menuSpa(facture);
            break;
        case 4:
            MenusInteractionFacture::menuGym(facture);
            break;
        case 5:
            MenusInteractionFacture::menuAfficher(facture);
            delete facture;
            execution = false;
            break;
        default:
            std::cout << std::endl << "CE N'EST PAS UN CHOIX VALIDE !!!!" << std::endl;
            break;
        }
    }
    return 0;
}
