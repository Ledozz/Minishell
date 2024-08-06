/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfauve-p <tfauve-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:53:12 by tfauve-p          #+#    #+#             */
/*   Updated: 2024/08/06 17:33:24 by tfauve-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
#define MINISHELL_H

# include "stdio.h"
# include "stdlib.h"
# include "readline/readline.h"
# include "readline/history.h"
# include "signal.h"

// COLORS

#define P = "\033[0;35m"
#define LP = "\033[1;35m"
#define R = "\033[0;31m"
#define LR = "\033[1;31m"
#define O = "\033[0;33m"
#define Y = "\033[1;33m"
#define LG = "\033[1;32m"
#define G = "\033[0;32m"
#define LC = "\033[1;36m"
#define C = "\033[0;36m"
#define LB = "\033[1;34m"
#define B = "\033[0;34m"
#define RST = "\033[0;0m"

// PARSE CHECKER //

void	ft_error_parsing(void);
int		ft_parser_check_quotes(char *a);
int		ft_parser_check(char *a);

// PARSER UTILIS //

int		ft_skip_until(char *a, char b, int i);

// SIGNALS

void	ft_get_signal(int sig);

#endif