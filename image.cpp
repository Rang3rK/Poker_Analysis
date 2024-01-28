//
// Created by Nu lar on 11/2/23.
//

#include "image.h"

sf::Texture image::texture;

void image::loadTexture()
{
    texture.loadFromFile("board.png");
}

sf::Texture& image::getImage()
{
    loadTexture();
    return texture;
}