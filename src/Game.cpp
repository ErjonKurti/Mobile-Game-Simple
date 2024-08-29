#include "Game.h"

Game::Game(sf::RenderWindow& window) : window(window), player() {
    // Initialize platforms
    for (int i = 0; i < 10; ++i) {
        float x = static_cast<float>(rand() % (window.getSize().x - 100));
        float y = static_cast<float>(i * (window.getSize().y / 10));
        platforms.emplace_back(x, y);
    }
}

void Game::update() {
    player.update();
    // Update other game logic
}

void Game::render() {
    window.draw(player.getSprite());
    for (const auto& platform : platforms) {
        window.draw(platform.getShape());
    }
}
