/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_checker.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfauve-p <tfauve-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:09:20 by tfauve-p          #+#    #+#             */
/*   Updated: 2024/08/06 15:49:58 by tfauve-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_error_parsing(void)
{
	printf("Erreur d'entree\n");
	exit(EXIT_FAILURE);
}

int	ft_parser_check_quotes(char *a)
{
	int	i;

	i = 0;
	while(a[i])
	{
		if (a[i] == 34 || a[i] == 39)
		{
			i = ft_skip_until(a, a[i], i + 1);
			if (i == -1)
				return (-1);
		}
		i++;
	}
	return (1);
}

int	ft_parser_check(char *a)
{
	if (ft_parser_check_quotes(a) == -1)
		return (free(a), -1);
	return(1);
}