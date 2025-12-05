/*
** EPITECH PROJECT, 2025
** exec
** File description:
** exec
*/

#include "../include/my.h"

int main(int ac, char **av)
{
   if (ac < 2)
        return 84;

   if (ac == 2 && strcmp(av[1], "-h") == 0) {
        usage();
        return 0;
    }
   if (execvp(av[1], &av[1]) == -1)
        return 84;
    return 0;
}
