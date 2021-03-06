#pragma once

#include "SFML\System.hpp"
#include "SFML\Graphics.hpp"

#include <fstream>

class Options
{
	bool ismute;

	static Options* instance;

	sf::Uint32 flagStyleWindow =  sf::Style::Titlebar | sf::Style::Close;//sf::Style::Fullscreen;

	char* nameWindow;
	sf::VideoMode videomode;

	int musicvolume;
	int soundvolume;
	
	Options();
public:
	static Options* getInstance();

	int getmusicvolume();
	int getsoundvolume();
	int getwidth();
	int getheight();
	char* getnameWindow();
	bool getismute();

	void setsoundvolume(int i_volume);
	void setmusicvolume(int i_volume);
	void setwidth(int i_width);
	void setheight(int i_height);
	void setnameWindow(char* i_name);
	void setvideomode(sf::VideoMode i_videomode);
	void setismute(bool i_ismute);

	sf::Uint32 getStyleFlag();

	void loadDefault();
	void saveoptions(char* i_path);
	void loadoptions(char* i_path);
	
	~Options();
};

