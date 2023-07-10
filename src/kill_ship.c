/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** kill_ship
*/

#include "my.h"

void kill_ship(sfEvent event, main_t *main)
{
    sfVector2i pos_window = sfMouse_getPositionRenderWindow(main->window);
    sfVector2f hitbox = sfSprite_getPosition(main->ship_sprite);

    if (event.type == sfEvtMouseButtonPressed && main->launch_game == 1) {
        if (pos_window.y <= (110 + hitbox.y) && pos_window.y >= (hitbox.y)
        && pos_window.x <= (200 + hitbox.x) && pos_window.x >= (hitbox.x)) {
            main->pos2i.x = -200;
            main->pos2i.y = rand() % 600;
        }
    }
}
