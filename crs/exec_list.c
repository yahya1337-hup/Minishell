#include "exec.h"

int	exec_list(t_executor *executor, t_ast_node *node, t_ctx *ctx)
{
	int status;
	int	i;
	
	if (!node || !node->u_content.s_list)
		return (0);
	i = 0;
	status = 0;
	while (i < node->u_content.s_list.count)
	{
		status = exec_node(executor, node->u_content.s_list.commands[i], ctx);
		
	}
}
