#include "Platform.h"

Platform::Platform(float x, float y) {
    shape.setSize(sf::Vector2f(100, 20));
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(x, y);
}

sf::RectangleShape Platform::getShape() const {
    return shape;
}
