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

void flag_u(va_list list)
{
    unsigned int nb = va_arg(list, unsigned int);
    unsigned int condition = 10;

    if (nb >= condition) {
        my_put_nbr(nb / condition);
    }
    my_putchar((nb % condition) + '0');
}
