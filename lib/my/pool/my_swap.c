/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** my lib
*/

int *my_swap(int a, int b, int *arr)
{
    int	x;

    x = arr[a];
    arr[a] = arr[b];
    arr[b] = x;
    return (arr);
}