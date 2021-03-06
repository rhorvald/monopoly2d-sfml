#include "MusicVolumeControl.h"

MusicVolumeControl::MusicVolumeControl()
{

}

MusicVolumeControl::~MusicVolumeControl()
{

}

void MusicVolumeControl::refreshvolumestate()
{
	int mid = Options::getInstance()->getmusicvolume() / 10;

	clearState();
	createState(mid);

	getbt_down()->setposition(getlocation());

	getbt_down()->refreshState();
	if (getbt_down()->isclick())
		Options::getInstance()->setmusicvolume(Options::getInstance()->getmusicvolume() - 10);

	getbt_up()->setposition(sf::Vector2i(
		int(getlocation().x + (getspacevalue() * 11) + getbt_down()->getcurrentSprite()->getGlobalBounds().width * 0.9), 
		getlocation().y));

	getbt_up()->refreshState();
	if (getbt_up()->isclick())
		Options::getInstance()->setmusicvolume(Options::getInstance()->getmusicvolume() + 10);
}
