#ifndef PLAYER_H
#define PLAYER_H

#include <SFML/Graphics.hpp>

class Player {
public:
    Player();
    void update();
    sf::Sprite getSprite() const;

private:
    sf::Texture texture;
    sf::Sprite sprite;
};

#endif // PLAYER_H
