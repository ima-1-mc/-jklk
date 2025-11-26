/*
** EPITECH PROJECT, 2025
** exec
** File description:
** exec                                                                                                                               
*/

#include "../include/my.h"

int main(int ac, char **av)
{
    char *const tab[] = {av[1], av[2], av[3], av[4], av[5], NULL};

    if (ac == 1)
        return 84;
    if (strcmp(av[1], "-h") == 0)
        usage();
    if (execvp(av[1], tab) == -1)
        return 84;
    return 0;
}
