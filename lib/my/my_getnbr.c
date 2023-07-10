/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int result = 0;
    char sign = 1;
    int i;

    for (i = 0; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-')
            sign = sign * -1;
    }
    for (result = 0; str[i] >= '0' && str[i] <= '9'; i++) {
        result = result * 10;
        result = result + (str[i] - '0');
    }
    return (result * sign);
}
