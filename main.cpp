#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include "Game.h"

int main(){
	//Window
	Game game;
	
	//Game Loop
	while(game.running()){
		//Event polling
		game.update();
			
		game.render();
	
	//Update
	
	//Draw game here	
	
	}
	return 0;
}
