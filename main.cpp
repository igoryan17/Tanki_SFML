#include <iostream>
#include <SFML/Graphics.hpp>
#include <thread>

void thread_func(sf::RenderWindow *argum)
{
    sf::RenderWindow *App = argum;
    while(App->isOpen())
    {
        sf::Event Event;
        while(App->pollEvent(Event))
        {
            if (Event.type == sf::Event::Closed)
            {
                App->close();
            }
            App->display();
        }
    }
}

int main()
{
    sf::RenderWindow App(sf::VideoMode(800, 600), "Hello, SFML");
    App.setActive(false);
    std::thread t(thread_func, &App);
    t.join();
}