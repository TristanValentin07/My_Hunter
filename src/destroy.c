/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** destroy
*/

#include "my.h"

void destroy(main_t *main)
{
    sfSprite_destroy(main->cursor_sprite);
    sfSprite_destroy(main->ship_sprite);
    sfSprite_destroy(main->wall_sprite);
}
