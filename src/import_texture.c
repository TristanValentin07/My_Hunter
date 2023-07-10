/*
** EPITECH PROJECT, 2022
** B-MUL-100-PAR-1-1-myhunter-tristan.valentin
** File description:
** call_sprite_texture
*/

#include "my.h"

main_t *import_texture(main_t *main)
{
    main->wall_texture =
    sfTexture_createFromFile("sprite/wall_para.png", NULL);
    main->ship_texture =
    sfTexture_createFromFile("sprite/spacesheet.png", NULL);
    main->cursor_texture = sfTexture_createFromFile("sprite/cursor.png", NULL);
    main->menu_wall_texture =
    sfTexture_createFromFile("sprite/menu_wall.jpg", NULL);
    main->menu_play_texture =
    sfTexture_createFromFile("sprite/play_icon.png", NULL);
    main->menu_quit_texture =
    sfTexture_createFromFile("sprite/quit.png", NULL);
    return main;
}
