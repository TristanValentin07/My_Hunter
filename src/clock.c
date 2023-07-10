/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** clock
*/

#include "my.h"

void clock_animation(main_t *main)
{
    main->time_animation = sfClock_getElapsedTime(main->clock_animation);
    main->second_animation = main->time_animation.microseconds / 1000000.0;
    if (main->second_animation > 0.1 && main->launch_game == 1) {
        main->rect.left += 200;
        if (main->rect.left == 800)
            main->rect.left = 0;
    }
    sfSprite_setTextureRect(main->ship_sprite, main->rect);
}

void clock_movement(main_t *main)
{
    sfVector2f pos2f = {main->pos2i.x, main->pos2i.y};
    main->time_movement = sfClock_getElapsedTime(main->clock_movement);
    main->second_movement = main->time_movement.microseconds / 1000000.0;

    if (main->second_movement > 0.002 && main->launch_game == 1) {
        if (main->pos2i.x == 1920) {
            main->pos2i.y = rand() % 600;
            main->pos2i.x = -200;
        } else {
            main->pos2i.x += 1;
            sfSprite_setPosition(main->ship_sprite, pos2f);
            sfClock_restart(main->clock_movement);
        }
    }
}

void clock_parallax(main_t *main)
{
    sfVector2f poswall = {main->pos_para.x, main->pos_para.y};

    if (main->second_movement > 0.002 && main->launch_game == 1) {
        if (main->pos_para.x == -1920) {
            main->pos_para.x = 0;
        } else {
            main->pos_para.x -= 1;
            sfSprite_setPosition(main->wall_sprite, poswall);
            sfClock_restart(main->clock_parallax);
        }
    }
}
