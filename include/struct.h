/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** struct
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <time.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System/Clock.h>
#include <SFML/System/Export.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct main_s {
    sfRenderWindow *window;
    sfTexture *wall_texture;
    sfTexture *ship_texture;
    sfTexture *cursor_texture;
    sfTexture *menu_wall_texture;
    sfTexture *menu_play_texture;
    sfSprite *menu_play_sprite;
    sfTexture *menu_quit_texture;
    sfSprite *menu_quit_sprite;
    sfSprite *menu_wall_sprite;
    sfSprite *cursor_sprite;
    sfSprite *ship_sprite;
    sfClock *clock_movement;
    sfClock *clock_animation;
    sfClock *clock_parallax;
    sfTime time_parallax;
    sfSprite *wall_sprite;
    sfIntRect rect;
    sfIntRect parallax;
    sfTime time_animation;
    sfTime time_movement;
    sfVector2f pos2f;
    sfVector2i pos_mouse;
    sfVector2i pos2i;
    sfVector2i pos_para;
    sfMusic *music;
    float second_animation;
    float second_movement;
    float second_parallax;
    float x;
    float y;
    int menu;
    int launch_game;
}main_t;

#endif /* !STRUCT_H_ */
