/*********************************************************************************************
  *
  *
  *
  *
**********************************************************************************************/
#include <SFML/System/Clock.hpp>
#include "Game.hpp"
#include "Sequence.hpp"

void Game::execute()
{
    loadTheResources();
    initializeTheThrowerOfSequences();
    initializeWindow();


    sf::Clock clock;
    sf::Event event;
    while( m_window.isOpen() )
    {
        while( m_window.pollEvent( event ) )
        {
            m_throwerOfSequences.playCurrentSequence( event, clock.restart(), m_window );
        }
    }
}
