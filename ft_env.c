/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:41:02 by ygarrot           #+#    #+#             */
/*   Updated: 2018/04/08 13:21:53 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void ft_env(g_shell *sh)
{
	int i = -1;

	//while (sh->env[i] && !ft_strnstr(sh->env[i], "PWD", 3))
	//	i++;
	//if ()
	while(sh->env[++i])
		ft_printf("%s\n", sh->env[i]);
	//ft_memdel((void**)&sh->env);
}