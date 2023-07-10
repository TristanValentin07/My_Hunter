/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** draw
*/

#include "my.h"

void draw(main_t *main)
{
    sfRenderWindow_drawSprite(main->window, main->wall_sprite, NULL);
    sfRenderWindow_drawSprite(main->window, main->ship_sprite, NULL);
    if (main->launch_game == 0) {
        sfRenderWindow_drawSprite(main->window, main->menu_wall_sprite, NULL);
        sfRenderWindow_drawSprite(main->window, main->menu_play_sprite, NULL);
        sfRenderWindow_drawSprite(main->window, main->menu_quit_sprite, NULL);
    }
    if (main->launch_game == 1)
        sfRenderWindow_drawSprite(main->window, main->cursor_sprite, NULL);
}
