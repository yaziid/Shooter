/**
 *
 * \Nom du fichier : gun.cpp
 * \fonction : methodes de la class gun
 * \Auteur : Maxia
 * \Project : Shooter
 *
 */

#include "gun.h"

gun::gun(std::string nom, int balles, int degats, int dure)
{
    m_nom = nom;
    m_balles = balles;
    m_degats = degats;
    m_dure = dure;
}

void gun::fire()
{
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
    {
        m_temps = m_horl.getElapsedTime();

        if(m_temps.asMilliseconds() > m_dure)
        {
            //m_position.x > 10 && m_position.x < 110 && m_position.y > 10 && m_position.y < 110
            for(int i = 0; i < 256; i++)
            {
                if(aim.getGlobalBounds().intersects(m_monstre.getpos()))
                {
                    if(m_balles > 0)
                    {
                        std::cout<<"boom !"<<std::endl;
                        m_balles++;
                        m_horl.restart();
                    }
                    else
                    {
                        // game over !
                    }

                }
            }
        }

        m_balles--;
    }
}

void gun::getpos(sf::RenderWindow &win)
{
    m_position = sf::Mouse::getPosition(win);
    aim.setSize(sf::Vector2f(0.1f, 0.1f));
    aimf = static_cast<sf::Vector2f>(m_position);
    aim.setPosition(aimf);

    m_monstre.moves();

    m_monstre.draw(win);
}

void gun::setmob(mob mob, int nb_monstre)
{
    m_monstre = mob;
    m_nb_monstre = nb_monstre;

    m_monstre.sprite("img.jpg");
}
