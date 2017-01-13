/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chk_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:32:00 by wfung             #+#    #+#             */
/*   Updated: 2017/01/12 20:41:36 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


int		ft_chk_size(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
	{
		printf("ft_chk_size str = null\n");
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '#' || str[i] == '\n')
			i++;
		else
		{
			printf("ft_chk_size input is invalid\n");
			return (2);
		}
	}
	printf("ft_chk_size passed in size = '%i'\n", i);
	return (0);
}

int		ft_chk_input(char *str)
{
	int		i;
	int		j;					// # counter
	int		k;					// \n counter
	char	*x;

	i = 0;
	j = 0;
	k = 0;
	if (ft_chk_size(str) != 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '#' || str[i] == '\n')
		{
			if (str[i] == '#')
				j++;
			if (str[i] == '\n')
				k++;
			i++;
		}
	}
	printf("[i][j][k] = [%i][%i][%i]\n",i, j, k);
	x = &str[i];
	printf("[&i] = [%c]\n", *x + 48);
	return (1);
}


/*
int		ft_chk_input(char *str)
{
	int		i;		//interate index for string of shapes
	int		j;		//counter for # of shapes

	i = 0;
	j = 0;			//if j == 0 means no shapes; if j >= 1 && <= 26 limit; if j > 27 error
	if (str[i] == '\0')
		return (j);
	while (str[i] != '\0')		//chk does not have a limit to check if input overflow
	{
		if (str[i] == '.' || str[i] == '#')		//chk for valid shapes
			i++;
		if (str[i] == '\n' && (i / 5) == 1)	//line by line check
			i++;
		if (str[i] == '\n' && (i / 20) == 1)	
			j++;												//shape count++
//		if (str[i] == '\n' && (i / 21) == 1)
//			i++;
	}
	if (i > 130 || (i % j) != 0 || j > 26)
		j = 0;		//wrong argument len; not enough or too many
	printf("ft_chk_input finished j = %i\n", j);
	return (j);		//if j == 0 argument has errors; else if j > 0 && <= 26 is correct
}
*/
