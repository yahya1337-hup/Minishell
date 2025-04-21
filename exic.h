#ifndef EXIC_H
#define EXIC_H

#include <stdio.h>
#include <unistd.h>

int ft_strchr(char *str, char c);
char **ft_split(char *str, char *delemeter);

typedef struct t_node
{
    int type;    
}   t_node;

#endif