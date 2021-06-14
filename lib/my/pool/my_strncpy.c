/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** my lib
*/
char *my_strncpy (char *dest, char const *src, int n)
{
    int x = 0;
    for (; x != n; x++) {
        dest[x] = src[x];
    }
    dest[x] = '\0';
    return (dest);
}