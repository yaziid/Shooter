/**
 *
 * \Nom du fichier : mob.h
 * \fonction : prototype de la classe mob
 * \Auteur : Maxia
 * \Project : Shooter
 *
 */

#ifndef MOB_H_INCLUDED
#define MOB_H_INCLUDED

#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>

class mob
{

    public:
        mob();
        mob(std::string nom, int pdv);
        void sprite(std::string img);
        void draw(sf::RenderTarget& target) const;
        int getpdv();
        sf::FloatRect getpos();
        void moves();
    private:
        int m_pdv;
        std::string m_nom;
        sf::Texture m_texture;
        sf::Sprite m_sprite;
};

#endif // MOB_H_INCLUDED
