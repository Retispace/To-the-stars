#include "ThrowerOfSequences.hpp"

void ThrowerOfSequences::manageTheEventsOfTheSequenceCurrent( sf::Event const& event )
{
    if( !isEmpty() )
        m_stack.top()->manageTheEvents( event );
}


void ThrowerOfSequences::updateTheLogicOfTheSequenceCurrent( sf::Time const& elapsedTime )
{
    if( !isEmpty() )
        m_stack.top()->updateTheLogic( elapsedTime );
}


void ThrowerOfSequences::drawTheSequenceCurrent( sf::RenderWindow& window )
{
    if( !isEmpty() )
        m_stack.top()->draw( window );
}


void ThrowerOfSequences::addSequence( std::unique_ptr<Sequence> sequence )
{
    if( !isEmpty() )
        m_stack.top()->pause();
    m_stack.push( std::move( sequence ) );
}

void ThrowerOfSequences::removeSequence()
{
    if( !m_stack.empty() )
        m_stack.pop();
    if( !m_stack.empty() )
        m_stack.top()->resume();
}



void ThrowerOfSequences::playCurrentSequence( sf::Event const& event, sf::Time const& elapsedTime, sf::RenderWindow& window )
{
    if( !m_stack.empty() )
    {
        if( !m_stack.top()->wantsTheEnd() )
        {
            manageTheEventsOfTheSequenceCurrent( event );
            updateTheLogicOfTheSequenceCurrent( elapsedTime );
            drawTheSequenceCurrent( window );
        }
        removeSequence();
    }
}


bool ThrowerOfSequences::isEmpty()const
{
    if( !m_stack.empty() )
        return true;
    return false;
}
