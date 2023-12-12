#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
class Game{
private:
	//Variables
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;
	
	//Game objects
	sf::RectangleShape enemy;
	
	//Funcs
	void initVariables();
	void initWindow();
	void initEnemies();

public:
	Game();
	virtual ~Game();
	
	//Accessors
	const bool running() const;
	
	//Funcs
	void pollEvents();
	void update();
	void render();
};


