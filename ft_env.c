/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:41:02 by ygarrot           #+#    #+#             */
/*   Updated: 2018/04/09 17:27:08 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"


void ft_unsetenv(g_shell *sh, char *argv[])
{
	t_env *env;
	env = search_var(sh->t_env, argv[0]);
	pop(env);
	ft_memdel((void**)&env);
	sh->new_env_size--;
}


void ft_setenv(g_shell *sh, char *argv[])
{
	t_env *env;

	env = search_var(sh->t_env, argv[0]);
	env->value = ft_implode('=', argv[0], argv[1]);
	sh->new_env_size++;
}

void ft_env(g_shell *sh, char *argv[])
{
	int i = -1;

	(void)argv;
	while(sh->env[++i])
		ft_printf("%s\n", sh->env[i]);
}
