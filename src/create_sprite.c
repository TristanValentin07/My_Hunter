/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** create_sprite
*/

#include "my.h"

main_t *create_sprite(main_t *main)
{
    main->wall_sprite = sfSprite_create();
    main->ship_sprite = sfSprite_create();
    main->cursor_sprite = sfSprite_create();
    main->menu_wall_sprite = sfSprite_create();
    main->menu_play_sprite = sfSprite_create();
    main->menu_quit_sprite = sfSprite_create();
    return main;
}
