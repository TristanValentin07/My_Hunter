/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** quit_button
*/

#include "my.h"

void quit_button(sfEvent event, main_t *main)
{
    sfVector2i poswindow = sfMouse_getPositionRenderWindow(main->window);
    sfVector2f hitbox_quit = sfSprite_getPosition(main->menu_quit_sprite);

    if (event.type == sfEvtMouseButtonPressed) {
        if (poswindow.y <= (110 + hitbox_quit.y) &&
        poswindow.y >= (hitbox_quit.y)
        && poswindow.x <= (250 + hitbox_quit.x) &&
        poswindow.x >= (hitbox_quit.x)) {
            sfRenderWindow_close(main->window);
        }
    }
}
