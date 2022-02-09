/*
** EPITECH PROJECT, 2021
** my printf
** File description:
** conversion int to decimal
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void flag_d(va_list list)
{
    my_put_nbr(va_arg(list, int));
}

void flag_i(va_list list)
{
    my_put_nbr(va_arg(list, int));
}
