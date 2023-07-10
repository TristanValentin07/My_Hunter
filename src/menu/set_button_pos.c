/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** set_button_pos
*/

#include "my.h"

void set_button_pos(main_t *main)
{
    sfVector2f pos_play = {830, 350};
    sfVector2f pos_quit = {830, 450};

    sfSprite_setPosition(main->menu_play_sprite, pos_play);
    sfSprite_setPosition(main->menu_quit_sprite, pos_quit);
}
