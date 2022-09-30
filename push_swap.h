/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlaure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:38:46 by matlaure          #+#    #+#             */
/*   Updated: 2022/09/27 11:29:52 by matlaure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <errno.h>

/*STRUCTURES========================================================STRUCTURES*/

typedef struct s_list {
	int				content;
	int				index;
	struct s_list	*next;
}	t_list;

char	**ft_split(char const *s, char c);
int		ft_atoi(const char *str);

#endif
