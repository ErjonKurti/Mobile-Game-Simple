#include "Player.h"

Player::Player() {
    texture.loadFromFile("assets/images/player.png");
    sprite.setTexture(texture);
    sprite.setPosition(400, 300);
}

void Player::update() {
    // Example movement
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
        sprite.move(-5, 0);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
        sprite.move(5, 0);
    }
}

sf::Sprite Player::getSprite() const {
    return sprite;
}
