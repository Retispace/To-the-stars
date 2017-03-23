#ifndef INCLUDE_SEQUENCE_HPP
#define INCLUDE_SEQUENCE_HPP

/*********************************************************************************************
  * Création du type Sequence qui sert de base pour les sequences d'un jeu tels qu'un Menu,
  * une Introduction, un menu d'option...
  *
  * Cette classe est destinée à être héritée de manière public.
  *
**********************************************************************************************/
#include <SFML/Window/Event.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Time.hpp>

class Sequence
{
public:
    virtual ~Sequence(){}

    void pause();
    void resume();
    bool isPaused()const;
    bool wantsTheEnd()const;


    /*********************************************************************************************
      * Ces 3 fonctions doivent être implémentées dans les classes qui dérivent de celle-ci.
      *
    **********************************************************************************************/
    virtual void manageTheEvents( sf::Event const& event ) = 0;
    virtual void updateTheLogic( sf::Time const& elapsedTime ) = 0;
    virtual void draw( sf::RenderWindow& window ) = 0;
protected:
    void end();
private:
    bool m_isPaused;
    bool m_isTheEnd;
};

#endif
