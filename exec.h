#ifndef EXEC_H
#define EXEC_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strchr(char *str, char c);


typedef struct t_node
{
    int type;    
}   t_node;

char    *get_arg(char *cmd);
char	**ft_split(char const *s, char c);
char    *extruct_cmd(char *cmd);
char	*get_path_cmd(char **env, char *cmd);

#endif