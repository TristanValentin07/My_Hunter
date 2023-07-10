/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** create_cursor
*/

#include "my.h"

void cursor(main_t *main)
{
    main->pos_mouse = sfMouse_getPositionRenderWindow(main->window);
    sfVector2f pos2f_mouse =
    {main->pos_mouse.x - 210, main->pos_mouse.y - 210};
    sfVector2f scale = {1, 1};

    sfSprite_setScale(main->cursor_sprite, scale);
    sfSprite_setPosition(main->cursor_sprite, pos2f_mouse);
    if (main->launch_game == 1)
        sfRenderWindow_setMouseCursorVisible(main->window, sfFalse);
}
