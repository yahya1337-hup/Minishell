#ifndef EXEC_H
#define EXEC_H
#include "../../minishell/src/parser/parser.h"
#include "../../minishell/src/scanner/scanner.h"
#include "env.h"

typedef struct t_ctx
{
				int fd[2];
				int cloes;
}						t_ctx;

typedef struct t_executor
{
	t_env env;
	int has_err;
	t_error err;
	int	*childs;
	int child_cout;
	int child_capacity;
}t_executor;

typedef enum t_error_code
{
	EXEC_ERROR = 4,
	FORK_ERROR,
	OPEN_ERROR,
	PIPE_ERROR,
	DUP2_ERROR,
	MALLOC_ERROR
}	t_error_code;

int	exec_node(t_executor *executor, t_ast_node *node, t_ctx *ctx);
#endif
