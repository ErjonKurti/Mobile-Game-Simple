#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "Player.h"
#include "Platform.h"

class Game {
public:
    Game(sf::RenderWindow& window);
    void update();
    void render();

private:
    sf::RenderWindow& window;
    Player player;
    std::vector<Platform> platforms;
};

#endif // GAME_H
