/*
** EPITECH PROJECT, 2021
** my printf
** File description:
** proto my_printf
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void flag_b(va_list list)
{
    int nb = va_arg(list, int);
    char *arr = malloc(sizeof(long unsigned int));
    int i = 0;

    for (; nb > 0; i++) {
        arr[i] = (nb % 2) + 48;
        nb /= 2;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(arr[j]);
    }
    free(arr);
}

void flag_o(va_list list)
{
    int nb = va_arg(list, int);
    char *arr = malloc(sizeof(long unsigned int));
    int i = 0;

    for (; nb > 0; i++) {
        arr[i] = (nb % 8) + 48;
        nb /= 8;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(arr[j]);
    }
    free(arr);
}

void flag_x(va_list list)
{
    int nb = va_arg(list, int);
    char *arr = malloc(sizeof(long unsigned int));
    int i = 0;
    int tmp = 0;

    for (; nb > 0; i++) {
        tmp = nb % 16;
        if (tmp > 9) {
            tmp += 87;
        } else {
            tmp += 48;
        }
        arr[i] = tmp;
        nb /= 16;
        tmp = 0;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(arr[j]);
    }
    free(arr);
}

void flag_X(va_list list)
{
    int nb = va_arg(list, int);
    char *arr = malloc(sizeof(long unsigned int));
    int i = 0;
    int tmp = 0;

    for (; nb > 0; i++) {
        tmp = nb % 16;
        if (tmp > 9) {
            tmp += 55;
        } else {
            tmp += 48;
        }
        arr[i] = tmp;
        nb /= 16;
        tmp = 0;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(arr[j]);
    }
    free(arr);
}
