/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_matchtest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 08:20:54 by wfung             #+#    #+#             */
/*   Updated: 2017/01/10 12:10:53 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int		ft_match1(char *str)								//input should be perfect, bottom function shape_match is replaced by this one 
{
	char	i;												//start strcmp index
	char	j;												//end strcmp index + # counter

	i = '0';
	j = '0';
	while (str++)
	{
		if (*str == '#' && j == '0')
		{
			i = *str;
			printf("i = %c\n", i);
		}
		if (*str == '#' && j < '3')
		{
			j++;
			printf("j = %c\n", j);
		}
		if (*str == '#' && j == '3')
		{
			j = *str;
			printf("end = %c\n", j);
//			ft_match_all([i:j]);							//after getting input str start + end, compare
			j = '0';
			printf("reset = %i\n", j);
		}
	}
	printf("str to cmp %s\n", str[i:j]);
	printf("str finished\n");
	return (0);												//returns 0 if function fails to find 4 #'s to compare
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%i\n", ft_match1(av[1]));
	}
	else
		printf("Wrong # of args\n");
	return (0);
}
