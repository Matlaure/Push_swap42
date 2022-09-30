/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matlaure <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:03:11 by matlaure          #+#    #+#             */
/*   Updated: 2022/09/19 18:23:50 by matlaure         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <stdio.h>
#include <limits.h>
#include <errno.h>
#include <pthread.h>

void	ft_error(char *msg)
{
	printf("Error : %s\n", msg);
	exit(1);
}


int	main(int ac, char **av, char **env)
{
	ft_error("something went wrong");
	printf("that guy's lying! everything is alright!\n");
	return (0);
}
