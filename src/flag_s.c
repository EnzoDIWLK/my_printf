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

void flag_s(va_list list)
{
    my_putstr(va_arg(list, char *));
}
