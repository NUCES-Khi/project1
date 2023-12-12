#include "Game.h"
#include "Hurdle.h"
void Game::initVariables(){
	this->window = NULL;
	
	int points;
	float enemySpawnTimer;
	float enemySpawnTimerMax;
	int maxHurdles;
	this->points = 0;
	
}

void Game::initWindow(){
	videoMode.height = 800; 
	videoMode.width = 900;
	this->window = new sf::RenderWindow(videoMode,"CodeVenture",sf::Style::Titlebar | sf::Style::Close);
	this->window->setFramerateLimit(60);
}

void Game::initEnemies(){
	this->enemy.setPosition(0,699);
	this->enemy.setSize(sf::Vector2f(100.f,100.f));//size
	this->enemy.setFillColor(sf::Color::Cyan);
	this->enemy.setOutlineColor(sf::Color::Green);
	this->enemy.setOutlineThickness(2.f);
	
}

Game::Game(){
	this->initVariables();
	this->initWindow();
	this->initEnemies();
}


Game::~Game(){
	delete this->window;
	
}

const bool Game::running() const{
	return this->window->isOpen();
}


//Funcs


void Game::pollEvents(){
	//Event polling
	while(this->window->pollEvent(this->ev)){
		switch(ev.type){
			case sf::Event::Closed:
				this->window->close();
				break;
			case sf::Event::KeyPressed:
				if(this->ev.key.code == sf::Keyboard::Escape){
					this->window->close();
				}
				break;
		}
	}
}

void Game::update(){
	this->pollEvents();
	this->updateEnemies();
}

void Game::render(){
	this->window->clear(sf::Color::Black);
	
	//Draw Game objects
	this->renderEnemies();
	this->window->draw(this->enemy);
	this->window->display();
}


Hurdle::Hurdle(){
	shape.setPointCount(3); // Triangle has 3 points
    shape.setPoint(0, sf::Vector2f(100, 50 + 200));
    shape.setPoint(1, sf::Vector2f(100 + 150 / 2, 50));
    shape.setPoint(2, sf::Vector2f(100 + 150, 50 + 200));
    shape.setFillColor(sf::Color(139, 69, 19)); // Brown color
}

void Game::spawnHurdle(){
	
	
}

void Game::updateEnemies(){
	
}

void Hurdle::Draw(sf::RenderWindow& window){
	window.draw(this->shape);
}

