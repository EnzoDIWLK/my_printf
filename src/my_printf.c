/*
** EPITECH PROJECT, 2021
** my printf
** File description:
** create printf
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "my.h"

typedef void (*func_ptr_t)(va_list);

typedef struct func {
    func_ptr_t func_ptr;
    char flag;
} func_t;

static const func_t funcs[] = {
    {.func_ptr = flag_prct, .flag = '%'},
    {.func_ptr = flag_c, .flag = 'c'},
    {.func_ptr = flag_s, .flag = 's'},
    {.func_ptr = flag_d, .flag = 'd'},
    {.func_ptr = flag_i, .flag = 'i'},
    {.func_ptr = flag_b, .flag = 'b'},
    {.func_ptr = flag_o, .flag = 'o'},
    {.func_ptr = flag_x, .flag = 'x'},
    {.func_ptr = flag_X, .flag = 'X'},
    {.func_ptr = flag_u, .flag = 'u'},
};

void find_flag(char flag, va_list list)
{
    for (long unsigned int i = 0; i < 9; i++) {
        if (flag == funcs[i].flag) {
            funcs[i].func_ptr(list);
            return;
        }
    }
    return;
}

int my_printf(char *str, ...)
{
    va_list list;
    int count = 0;

    va_start(list, str);
    for (int i = 0; i < my_strlen(str); i += 1) {
        if (str[i] == '%') {
            i += 1;
            find_flag(str[i], list);
        } else {
            my_putchar(str[i]);
        }
    }
    va_end(list);
    return (count);
}
