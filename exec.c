#include "exec.h"

#define CMD=1

typedef struct cmd
{
    char *cmd_ptr;
    char  *path;
    char **arg;
} cmd_info;

void    exic_cmd(char *cmd, char **env)
{
    cmd_info    cmd1;

    cmd1.path = get_path_cmd(env, cmd);
    cmd1.arg =  get_arg(cmd);
    if (access(cmd1.path, F_OK))
        
    if (ft_strchr(cmd, ' '))
    {
        if (fork() == 0)
            execve(cmd1.path, cmd1.arg, env);
    }
    else
        {
            if (fork() == 0)
                execve(cmd1.path, cmd1.arg, env);
        }
    
}

void    exic(t_node *node, char **env)
{
    if (node->type == CMD)
        //exic_cmd;
    else 
        //exic_pipe

}

int main(int ac, char **av, char **env)
{


    return (0);
}