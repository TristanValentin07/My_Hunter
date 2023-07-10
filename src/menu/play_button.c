/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** play_button
*/

#include "my.h"

void launch_game(sfEvent event, main_t *main)
{
    sfVector2i poswindow = sfMouse_getPositionRenderWindow(main->window);
    sfVector2f hitbox_play = sfSprite_getPosition(main->menu_play_sprite);

    if (event.type == sfEvtMouseButtonPressed) {
        if (poswindow.y <= (110 + hitbox_play.y) &&
        poswindow.y >= (hitbox_play.y)
        && poswindow.x <= (250 + hitbox_play.x) &&
        poswindow.x >= (hitbox_play.x))
            main->launch_game = 1;
    }
}
