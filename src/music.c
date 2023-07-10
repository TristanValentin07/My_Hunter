/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** music
*/
#include "my.h"

void music(main_t *main)
{
    main->music = sfMusic_createFromFile("music/game_music.wav");
    sfMusic_play(main->music);
    sfMusic_setLoop(main->music, sfTrue);
}
