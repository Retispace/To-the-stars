#ifndef INCLUDE_SpriteAnime_HPP
#define INCLUDE_SpriteAnime_HPP

/*********************************************************************************************
  *
  *
  *
  *
**********************************************************************************************/

include "Animation.hpp"

class TableOfAnimation
{
public:
	TableOfAnimation();
		
	void addAnime( Animation animation );
	void anime(int currentImage, int needAnime, float deltaTime);
	void drawAnime();

private:

	std::vector < Animation > m_tableOfAnimation;
	unsigned int m_currentAnime;
	unsigned int m_needAnime;
	
}