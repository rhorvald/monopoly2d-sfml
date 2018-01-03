#pragma once

#include "SFML\Audio.hpp"


#include "StateObject.h"

class SoundableObject
{
	int state;

	sf::Sound* hover_sound;
	sf::SoundBuffer* hover_soundbuffer;

	sf::Sound* click_sound;
	sf::SoundBuffer* click_soundbuffer;
public:
	void sethoversound(char* i_path);
	void setclicksound(char* i_path);
	void playSound(int state);

	SoundableObject();
	virtual ~SoundableObject();
};

