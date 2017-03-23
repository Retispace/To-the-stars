/*********************************************************************************************
  *
  *
  *
**********************************************************************************************/
#include "Sequence.hpp"

void Sequence::pause()
{
    m_isPaused = true;
}


void Sequence::resume()
{
    m_isPaused = false;
}


bool Sequence::isPaused()const
{
    if( m_isPaused )
        return true;
    return false;
}


bool Sequence::wantsTheEnd()const
{
    if( m_isTheEnd )
        return true;
    return false;
}


void Sequence::end()
{
    m_isTheEnd = true;
}
