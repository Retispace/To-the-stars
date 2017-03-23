#ifndef INCLUDE_GAME_HPP
#define INCLUDE_GAME_HPP

/*********************************************************************************************
  *
  *
  *
  *
**********************************************************************************************/
#include <SFML/Graphics/RenderWindow.hpp>
#include "NoCopyable.hpp"
#include "ThrowerOfSequences.hpp"

class Sequence;

class Game
{
public:
    Game();
    virtual ~Game(){}
    void execute();

protected:
    virtual void initializeTheThrowerOfSequences() = 0;
    virtual void loadTheResources() = 0;
    virtual void initializeWindow() = 0;


    ThrowerOfSequences m_throwerOfSequences;
    sf::RenderWindow m_window;
};

#endif
