/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chk_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:32:00 by wfung             #+#    #+#             */
/*   Updated: 2017/01/15 20:25:44 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_chk_count(char *str, int i, int j, int k) // all, #, \n
{
	int		x;/*	might not be needed
	int		y;
	int		z;
					might not be needed
*/	x = i / 21;				//all counted per shape > 1
/*	y = j / 4;				//# counted per shape
	z = k / 5;				//\n counted per shape > 1
*/	if (i == 20 && j != 4 && k != 4)
		return (0);
	else if (i > 21 && x >= 2 && x <= 26)
	{
		if (i % 21 != 0 || j % 4 != 0 || k % 5 != 0)
		{
			printf("chk_count [i] = '%i'[j] = '%i'[k] = '%i'\n", i, j, k);
			return (0);
		}
	}			//	use strlen to compare vs params?
	else if (ft_strlen(str) > 546)
		return (0);
	return (1);
}

int		ft_chk_char(char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '#' || str[i] == '\n' || str[i] == '.')
		{
			if (str[i] == '#')
				j++;
			else if (str[i] == '\n')
				k++;
			i++;
		}
		else if (str[i] != '#' && str[i] != '\n' && str[i] != '.')
			return (0);
	}
	if (ft_chk_count(str, i, j, k) != 1)
		return (0);
	return (1);
}

int		ft_chk_input(char *str)
{
	int		i;
	int		j;					// # counter
	int		k;					// \n counter

	i = 0;
	j = 0;
	k = 0;
	if (ft_chk_char(str) != 1)
	{
		printf("chk_input chk_char failed\n----");
		return (0);
	}
	printf("chk_input chk_char passed\n-----\n");
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '#' || str[i] == '\n')
		{
			if (str[i] == '#')
				j++;
			else if (str[i] == '\n')
				k++;
			i++;
		}
		else
			return (0);
	}
	printf("end of chk_input\n----\n");
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
