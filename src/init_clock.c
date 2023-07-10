/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** init_clock
*/

#include "my.h"

void init_clock(main_t *main)
{
    main->clock_animation = sfClock_create();
    main->clock_movement = sfClock_create();
    main->clock_parallax = sfClock_create();
}
