#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::Window App(sf::VideoMode(800, 600), "Hello, SFML");

    while(App.isOpen())
    {
        sf::Event Event;
        while(App.pollEvent(Event))
        {
            if (Event.type == sf::Event::Closed)
            {
                App.close();
            }
            App.display();
        }
    }
}