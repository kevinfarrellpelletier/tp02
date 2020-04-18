#ifndef __ELEMENTFACTURABLE_H__
#define __ELEMENTFACTURABLE_H__
#include <string>

//!  Classe abstraite qui definit un Element Facturable
/*!
  Classe abstraite a heriter et specifier
*/
class ElementFacturable {

    protected:
        //! Variable protegee
        /*!
          Donnee de type double.
          Represente le montant en dollars de l'Element Facturable. 
          Peut etre accede par un enfant de cette classe.
        */
        double montant;

        //! Variable protegee.
        /*!
          Donnee de type std::string
          Represente le nom l'Element Facturable. 
          Peut être accede par un enfant de cette classe.
        */
        std::string nom;

        //! Constructeur protege.
        /*!
          Le Constructeur est protege afin que seulement un enfant de cette classe puisse l'utiliser.  
          Permet d'attribuer une valeur a la variable protegee 'nom'.
          \param nom Donnee de type std:string representant le nom d'un Element Facturable
        */
        ElementFacturable(const std::string nom);

    public:
        //! Constructeur publique par defaut
        /*!
          Le Constructeur publique par defaut.  
          Notez qu'aucun nouvel objet de type ElementFacturable ne peut être cree car la classe est abstraite
        */
        ElementFacturable();

        //! Destructeur publique par defaut
        /*!
          Le Destructeur publique par defaut.  
          Prend en charge la destruction de cette classe mere
        */
        virtual ~ElementFacturable();

        //! Methode publique virtuelle pure 
        /*!
          Cette methode rend la class abstraite.  
          Doit être definie par les classes enfants.
        */
        virtual void calculerMontant() = 0;

        //! Methode publique
        /*!
          Cette methode permet d'obtenir le nom d'un Element Facturable
          \return Donnee de type std::string representant le nom d'un Element Facturable
        */
        std::string getNom() const;

        //! Methode publique
        /*!
          Cette methode permet d'obtenir le montant en dollars de l'Element Facturable
          \return Donnee de type double representant le montant en dollars d'un Element Facturable
        */
        double getMontant() const;
};
#endif //__ELEMENTFACTURABLE_H__

