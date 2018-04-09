/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 18:20:32 by ygarrot           #+#    #+#             */
/*   Updated: 2018/04/09 18:30:41 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
int main(int ac, char **av, char **env)
{
	pid_t father;
	g_shell		sh;
	char	*line;
	char	**tab;

	(void)ac;(void) av;
	init(&sh, env);
	while (1)
	{
		ft_printf("{concblue}%s{reset}$>", sh.pwd);
		get_next_line(0, &line);
		mallcheck(tab = ft_strsplit(line, ' '));
		father = fork();
		if (father > 0)
			wait(0);
		if (father == 0)
			search_exec(&sh, tab[0], tab);
	}
}
