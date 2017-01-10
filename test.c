
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 10:58:57 by wfung             #+#    #+#             */
/*   Updated: 2017/01/10 11:47:40 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

/*
int		match(char *s)
{
	char	x;
	char	y;
	char	z;

	x = '1';
	y = '2';
	z = *s;
	printf("x = '%c'\n", x);
	printf("y = '%c'\n", y);
	printf("z = '%c'\n", z);
	s++;
	z = *s;
	printf("z++ = '%c'\n", z);
	s++;
	z = *s;
	printf("z+2 = '%c'\n", z);
	return (0);
}

int		main(void)
{
	match("hel");
	return (0);
}

*/

int		m1(char *s)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '0';
	printf("i = '%c'\n", i);
	printf("j = '%c'\n", j);
	i = i + 1;
	printf("new i = '%c'\n", i);
	j = *s;
	printf("new j = '%c'\n", j);
	while (*s)
		s++;
	s--;
	k = *s;
	printf("av1 = '%c'\n", s[j:k]);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		m1(av[1]);
	}
	else
		printf("wrong # of args\n");
	return (0);
}
