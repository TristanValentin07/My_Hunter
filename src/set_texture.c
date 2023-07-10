/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** set_texture
*/

#include "my.h"

void set_texture(main_t *main)
{
    sfSprite_setTexture(main->wall_sprite, main->wall_texture, sfFalse);
    sfSprite_setTexture(main->ship_sprite, main->ship_texture, sfFalse);
    sfSprite_setTexture(main->cursor_sprite, main->cursor_texture, sfFalse);
    sfSprite_setTexture(main->menu_wall_sprite,
    main->menu_wall_texture, sfFalse);
    sfSprite_setTexture(main->menu_play_sprite,
    main->menu_play_texture, sfFalse);
    sfSprite_setTexture(main->menu_quit_sprite,
    main->menu_quit_texture, sfFalse);
}
