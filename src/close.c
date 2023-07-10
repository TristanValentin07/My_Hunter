/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** close
*/

#include "my.h"

void close_window(sfEvent event, main_t *base)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(base->window);
}
