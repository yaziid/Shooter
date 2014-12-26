/**
 *
 * \Nom du fichier : main.cpp
 * \fonction : le main [comme son nom l'indique]
 * \Auteur : Maxia
 * \Project : Shooter
 *
 */

#include <SFML/Graphics.hpp>
#include "gun.h"
#include "mob.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    gun mf("m4", 30, 5, 490);
    mob yaz("Yazid", 100);

    mf.setmob(yaz, 1);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        mf.fire();

        window.clear();
        mf.getpos(window);
        window.display();
    }

    return 0;
}
