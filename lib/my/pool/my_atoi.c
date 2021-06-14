/*
** EPITECH PROJECT, 2020
** my_pushswap
** File description:
** my_atoi
*/

int my_atoi(char *s)
{
    int n = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            n = n * 10;
            n = n + (s[i] - 48);
        }
    }
    return (n);
}