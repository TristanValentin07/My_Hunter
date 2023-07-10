/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** set_ship_texture
*/

#include "my.h"

void set_ship_texture(main_t *main)
{
    main->rect.height = 110;
    main->rect.width = 200;
    main->rect.left = 0;
    sfSprite_setTextureRect(main->ship_sprite, main->rect);
}
