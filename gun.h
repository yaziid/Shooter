/**
 *
 * \Nom du fichier : gun.h
 * \fonction : prototype de la classe gun
 * \Auteur : Maxia
 * \Project : Shooter
 *
 */

#ifndef GUN_H_INCLUDED
#define GUN_H_INCLUDED

#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "mob.h"

class gun
{
    public:
        gun(std::string nom, int balles, int degats, int dure);
        void fire();
        void getpos(sf::RenderWindow &win);
        void sprite(sf::Texture texture, std::string img);
        void draw(sf::RenderWindow &win);
        void setmob(mob mobs, int nb_monstre);

    private:
        int m_balles;
        float m_degats;
        int m_dure;
        int m_nb_monstre;
        std::string m_nom;
        sf::Vector2i m_position;
        sf::Time m_temps;
        sf::Clock m_horl;
        sf::Sprite m_sprite;
        sf::Texture m_texture;
        sf::RectangleShape aim;
        sf::Vector2f aimf;
        mob m_monstre;
};

#endif // GUN_H_INCLUDED
