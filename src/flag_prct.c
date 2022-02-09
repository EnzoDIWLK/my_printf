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

void flag_prct(va_list list)
{
    my_putchar('%');
}
