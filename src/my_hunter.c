/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_hunter
*/

#include "my.h"

int openwindow(main_t *main)
{
    sfVideoMode video_mode = {1920, 1080, 32};
    sfEvent event;

    main->window = sfRenderWindow_create(video_mode, "My_hunter", sfClose
        | sfResize, NULL);
    call_const_assets(main);
    while (sfRenderWindow_isOpen(main->window)) {
        sfRenderWindow_clear(main->window, sfBlack);
        call_clock(main);
        cursor(main);
        draw(main);
        while (sfRenderWindow_pollEvent(main->window, &event)) {
            call_event(event, main);
        }
        sfRenderWindow_display(main->window);
    }
    destroy(main);
    return (0);
}
