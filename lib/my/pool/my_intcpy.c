/*
** EPITECH PROJECT, 2020
** my_pushswap
** File description:
** my_intcpy
*/

int *my_intcpy (int *dest, int const *src, int n)
{
    int x = 0;
    for (; x != n; x++) {
        dest[x] = src[x];
    }
    dest[x] = '\0';
    return (dest);
}