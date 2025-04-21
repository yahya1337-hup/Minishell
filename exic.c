#include "exic.h"

#define CMD=22


int count_cmd(char **cmd)
{
    int i;

    i = 0;
    while (cmd[i])
        i++;
    return i;
}

void    full_arg(char **arg, char **cmd, int num_cmd)
{
    int i;

    i = 0;
    while (i < num_cmd)
    {
        arg[i] = cmd[i];
        i++;
    }
    arg[i] = NULL;
}

void    exic_cmd(char *cmd)
{
    char    **arg;
    char    **cmd2;
    if (ft_strchr(cmd, ' '))
    {
        cmd2 = ft_split(cmd, ' ');
        full_arg(arg, cmd2, count_cmd(cmd2));
        //path of cmd;
        if (fork() == 0)
        {
            execv(path, arg);
        }
    }
    else
        {
            arg[0] = cmd;
            arg[1] = NULL;
            //paht of cmd;
            execv(path, arg);
        }
    
}

void    exic(t_node *node)
{
    if (node->type == CMD)
        //exic_cmd;
    else 
        //exic_pipe

}

int main()
{
    return (0);
}