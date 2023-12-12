#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <vector>
class Game{
private:
	//Variables
	sf::RenderWindow* window;
	sf::VideoMode videoMode;
	sf::Event ev;
	
	//Game logic
	int points;
	float enemySpawnTimer;
	float enemySpawnTimerMax;
	int maxHurdles;
	//Game objects
	std::vector<sf::RectangleShape> hurdles;
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
	void spawnHurdle();
	
	void pollEvents();
	
	void updateEnemies();
	void update();
	void render();
	void renderEnemies();
};


