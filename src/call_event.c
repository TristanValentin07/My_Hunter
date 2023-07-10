/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** call_event
*/

#include "my.h"

void call_event(sfEvent event, main_t *main)
{
    kill_ship(event, main);
    launch_game(event, main);
    quit_button(event, main);
    close_window(event, main);
}
