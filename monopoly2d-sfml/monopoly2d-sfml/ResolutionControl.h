#pragma once

#include "ClickableObject.h"
#include "StaticGraphicObject.h"
#include "SFML\Graphics.hpp"
#include "GameWindow.h"
#include "GameButton.h"

#include <vector>

class ResolutionControl
{
	int number = 0;

	sf::Text* text;
	sf::Font font;
	sf::Vector2i position;

	GameButton* bt_down;
	GameButton* bt_up;

	std::vector<sf::VideoMode> videomodes;

	int numbercurrentresolution();
	void erasevideomode(int i_lessthan);
public:
	ClickableObject* getco_down();
	ClickableObject* getco_up();

	void refreshtext(std::string i_text,const sf::Color i_color);
	void settextposition(sf::Vector2i i_position);
	sf::Font getfont();
	void loadfontFromFile(char* i_path);
	void setlocation(sf::Vector2i i_location);
	sf::Vector2i getlocation();
	void add(GameWindow* i_gamewindow);
	void playbuttonssound();

	std::string gettextresolution(int i);
	sf::VideoMode getvideomode();

	ResolutionControl();
	virtual ~ResolutionControl();
};

