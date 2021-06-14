/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** my lib
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    char c;
    int x;
    x = my_strlen(str) - 1;
    for (int i = 0; i < x; i++, x--)
    {
        c = str[i];
        str[i] = str[x];
        str[x] = c;
    }
    return (str);
}