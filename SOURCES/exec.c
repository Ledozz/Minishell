/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfauve-p <tfauve-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:01:37 by tfauve-p          #+#    #+#             */
/*   Updated: 2024/08/07 16:49:04 by tfauve-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_exec(t_struct *data)
{
	int	i;
	int	j;

	i = 0;
	while (data->arg[i])
	{
		j = 0;
		while (data->arg[i][j])
		{
			printf("[%c] ", data->arg[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
