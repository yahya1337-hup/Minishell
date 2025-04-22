#include "exec.h"

int count_cmd(char **cmd)
{
    int i;

    i = 0;
    while (cmd[i])
        i++;
    return i;
}

char    *get_arg(char *cmd)
{
    char **arg;
    int     num_arg;

    arg = ft_split(cmd, ' ');
    num_arg = count_cmd(arg);
    arg[num_arg] = NULL;

    return (arg);
}

int strlen_of_cmd(char *cmd)
{
    int i;

    i = 0;
    while (cmd[i] && cmd[i] != ' ')
        i++;
    return i;
}

char    *extruct_cmd(char *cmd)
{
    char    *cmd2;
    char **cmd_flagss;
    int i;
    
    i = 1;
    cmd_flagss = ft_split(cmd, ' ');
    cmd2 = cmd_flagss[0];
    while (cmd_flagss[i])
        free(cmd_flagss[i++]);
    free(cmd_flagss);
    return (cmd2);
}



int main()
{
    
    printf("%d",count_cmd(ft_split("cat -e out.txt", ' ')));
}