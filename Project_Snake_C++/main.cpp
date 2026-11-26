#include <SFML/Graphics.hpp>
#include "config.h"
#include "Vec2.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({ WINDOW_W, WINDOW_H }), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    Vec2i A;
    A.x = 10;
    A.y = 12;
    Vec2i B;
    B.x = 30;
    B.y = 20;
    Vec2i C = A.operator+(B);
    bool isEqual = A.operator==(B);
    LOG(C.x << "+Operator x");
    LOG(C.y << "+Operator y");
    LOG(isEqual << "Equal Operator");


    
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

}