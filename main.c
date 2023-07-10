/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    main_t *main = malloc(sizeof(main_t));
    if (main == NULL) {
        my_printf("Malloc failed\n");
        return 84;
    }
    openwindow(main);
    return 0;
}
