#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
class Hurdle {
private:
    sf::ConvexShape shape;

public:
    // Constructor
    Hurdle();
    // Draw the Hurdle
    void Draw(sf::RenderWindow& window);
    
};

