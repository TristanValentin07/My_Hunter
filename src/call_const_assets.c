/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** call_const_assets
*/

#include "my.h"

void call_const_assets(main_t *main)
{
    main = import_texture(main);
    main = create_sprite(main);
    set_ship_texture(main);
    set_texture(main);
    start_random_pos(main);
    init_clock(main);
    set_button_pos(main);
    music(main);
    main->launch_game = 0;
}
