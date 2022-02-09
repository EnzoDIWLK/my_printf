/*
** EPITECH PROJECT, 2021
** my printf
** File description:
** proto my_printf
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

int my_put_nbr(int nb)
{
    int count = 0;

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb >= 10) {
        count = my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    count += 1;
    return (count);
}

int my_putstr(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    write(1, &str, i);
    return (i);
}