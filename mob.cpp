/**
 *
 * \Nom du fichier : mob.cpp
 * \fonction : methodes de la class mob
 * \Auteur : Maxia
 * \Project : Shooter
 *
 */

#include "mob.h"

mob::mob()
{
}

mob::mob(std::string nom, int pdv)
{
    m_nom = nom;
    m_pdv = pdv;
}
void mob::sprite(std::string img)
{

    if (!m_texture.loadFromFile(img))
    {
        std::cout<<"Erreur chargement texture"<<std::endl;
    }

    m_sprite.setTexture(m_texture);
}

void mob::draw(sf::RenderTarget& target) const
{
    target.draw(m_sprite);
}

void mob::moves()
{
    m_sprite.move(0.1f, 0.1f);
}

int mob::getpdv()
{
    return m_pdv;
}

sf::FloatRect mob::getpos()
{
    return m_sprite.getGlobalBounds();
}
