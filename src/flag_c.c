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

void flag_c(va_list list)
{
    my_putchar((char) va_arg(list, int));
}
