#ifndef INCLUDE_THROWER_OF_SEQUENCES_HPP
#define INCLUDE_THROWER_OF_SEQUENCES_HPP

#include <stack>
#include <memory>
#include <SFML/Window/Event.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include "Sequence.hpp"

class ThrowerOfSequences
{
public:
    void playCurrentSequence( sf::Event const& event, sf::Time const& elapsedTime, sf::RenderWindow& window );
    void addSequence( std::unique_ptr<Sequence> sequence );
    void removeSequence();
    bool isEmpty()const;
private:
    void manageTheEventsOfTheSequenceCurrent( sf::Event const& event );
    void updateTheLogicOfTheSequenceCurrent( sf::Time const& elapsedTime );
    void drawTheSequenceCurrent( sf::RenderWindow& window );

    std::stack<std::unique_ptr<Sequence>> m_stack;
};
#endif
