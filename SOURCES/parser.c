/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfauve-p <tfauve-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:59:25 by tfauve-p          #+#    #+#             */
/*   Updated: 2024/08/07 16:24:22 by tfauve-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_parser(t_struct *data)
{
	int		i;

	i = 0;
	if (ft_parser_check(data) == -1)
		ft_error_parsing();
	printf("Data->line = %s\n", data->line);
	data->arg = ft_split(data->line, '|');
	if (!data->arg)
		return ;
}
