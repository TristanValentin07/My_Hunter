/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my
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
#include "struct.h"

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int my_strlen(char const *str);
int my_strcmp(const char *str1, char *str2);
long long my_compute_power_rec(int nb, int p);

int my_printf(const char *format, ...);
int choose_format(const char *format, va_list param);
int good_nbflag(char const *format, char *array, int i, va_list param);
int if_flag(char const *format, char *array, va_list param, int i);
int read_format(char const *format, char *array, va_list param);
void call_flags2(const char *format, va_list param);

int flag_int_decimal(va_list param);
int flag_char(va_list param);
int flag_str(va_list param);
int flag_pourcent(va_list param);
int flag_unsigned_int_decimal(va_list param);
int flag_unsigned_int_octal(va_list param);
int flag_unsigned_int_hexa_sml(va_list param);
int flag_unsigned_int_hexa_big(va_list param);
int flag_unsigned_int_binary(va_list param);
int flag_str_big(va_list param);
int flag_pntr(va_list param);
int flag_unsigned_int_hexa_pntr(va_list param);
int flag_f(va_list param);
int flag_f_hex_sml(va_list param);
int flag_f_hex_big(va_list param);
int flag_f_exp_sml(va_list param);
int flag_f_exp_big(va_list param);
int flag_g(va_list param);
int flag_g_f(double nb, int exponent);
int flag_g_e(double nb, int exponent);
int exp_print_big(int e);
int exp_print_sml(int e);
int hex_exp_print(int exponent);

int my_put_binary(int nb);
int my_put_hexa_sml(unsigned long long int nb);
int my_put_hexa_big(int nb);
int my_put_hexa_pntr(unsigned long long int nb);

char **my_str_to_word_array(char const *str);
int my_show_word_array(char * const *tab);

int openwindow(main_t *main);
void close_window(sfEvent event, main_t *base);
main_t *import_texture(main_t *main);
main_t *create_sprite(main_t *main);
void draw(main_t *main);
void set_texture(main_t *main);
void init_clock(main_t *main);
void set_ship_texture(main_t *main);
void clock_animation(main_t *main);
void clock_movement(main_t *main);
void start_random_pos(main_t *main);
void cursor(main_t *main);
void destroy(main_t *main);
void kill_ship(sfEvent event, main_t *main);
void set_wallpaper_texture(main_t *main);
void clock_parallax(main_t *main);
void call_clock(main_t *main);
void call_const_assets(main_t *main);
void launch_game(sfEvent event, main_t *main);
void set_button_pos(main_t *main);
void quit_button(sfEvent event, main_t *main);
void call_event(sfEvent event, main_t *main);
void music(main_t *main);

#endif /* !MY_H_ */
