#ifndef PLATFORM_H
#define PLATFORM_H

#include <SFML/Graphics.hpp>

class Platform {
public:
    Platform(float x, float y);
    sf::RectangleShape getShape() const;

private:
    sf::RectangleShape shape;
};

#endif // PLATFORM_H
