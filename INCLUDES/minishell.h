/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfauve-p <tfauve-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:53:12 by tfauve-p          #+#    #+#             */
/*   Updated: 2024/08/07 16:53:58 by tfauve-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "stdio.h"
# include "stdlib.h"
# include "readline/readline.h"
# include "readline/history.h"
# include "asm/termbits.h"
# include "sys/ioctl.h"
# include "signal.h"
# include "unistd.h"

// COLORS //

# define P = "\033[0;35m"
# define LP = "\033[1;35m"
# define R = "\033[0;31m"
# define LR = "\033[1;31m"
# define O = "\033[0;33m"
# define Y = "\033[1;33m"
# define LG = "\033[1;32m"
# define G = "\033[0;32m"
# define LC = "\033[1;36m"
# define C = "\033[0;36m"
# define LB = "\033[1;34m"
# define B = "\033[0;34m"
# define RST = "\033[0;0m"

typedef struct data
{
	char	**arg;
	char	*line;
}	t_struct;

typedef struct list
{
	char		**content;
	struct list	*next_content;
}	t_list;

// SIGNALS //

# define SIG_INT = 1
# define SIG_QUIT = 2

// PARSER //

void	ft_parser(t_struct *data);

// PARSE CHECKER //

void	ft_error_parsing(void);
int		ft_parser_check_quotes(t_struct *data);
int		ft_parser_check(t_struct *data);

// PARSER UTILIS //

int		ft_skip_until(char *a, char b, int i);

// SIGNALS //

void	ft_init_signals(void);
void	ft_get_signal_int(int sig);
void	ft_get_signal_quit(int sig);
void	ft_handle_signals(void);

// EXEC //

void	ft_exec(t_struct *data);

// FREE //

void	ft_free(t_struct *data);

// SPLIT //

int		ft_countword(char const *s, char c);
int		ft_strlen(char const *s);
char	*ft_writeword(char const *s, int start, int end);
char	**ft_mecanism(int length, char **tab, char *line, char c);
char	**ft_split(char *s, char c);

#endif