/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** start_random_pos
*/

#include "my.h"

void start_random_pos(main_t *main)
{
    main->pos2i.y = rand() % 600;
    main->pos2i.x = -200;
}
