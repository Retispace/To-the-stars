/*********************************************************************************************
  *
  *
  *
  *
**********************************************************************************************/
#include "TableOfAnimation.hpp"

TableOfAnimation::TableOfAnimation()
:m_currentAnime(0), m_needAnime(0)
{

}



TableOfAnimation::addAnime( Animation animation )
{
	
	m_tableOfAnimation.pushback( animation );
	
}



TableOfAnimation::anime(int currentAnime, int needAnime, float deltaTime)
{
	if(currentAnime != needAnime && needAnime < m_tableOfAnimation.size() - 1)
		m_currentAnime = needAnime;
			
	m_tableOfAnimation[m_currentAnime].update(float deltaTime);
}


TableOfAnimation::drawAnime()
{
	m_tableOfAnimation[m_currentAnime].draw();
}