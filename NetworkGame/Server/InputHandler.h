#pragma once
#include "SFML\Graphics.hpp"

class Player;

class InputHandler
{
public:
	InputHandler(Player* player);
	void update(const sf::Time& elapsed);
private:
	sf::Vector2f pos;
	sf::Vector2f moveVec;
	float speed;
	Player* owner;
};

