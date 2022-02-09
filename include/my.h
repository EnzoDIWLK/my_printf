/*
** EPITECH PROJECT, 2021
** my printf
** File description:
** create printf
*/

#ifndef MY_H_
    #define MY_H_
    int my_printf(char *str, ...);
    void my_putchar(char c);
    int my_strlen(char const *str);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    void flag_prct(va_list list);
    void flag_c(va_list list);
    void flag_s(va_list list);
    void flag_d(va_list list);
    void flag_i(va_list list);
    void flag_b(va_list list);
    void flag_o(va_list list);
    void flag_x(va_list list);
    void flag_X(va_list list);
    void flag_u(va_list list);
#endif /*MY_H_*/
