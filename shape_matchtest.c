/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_matchtest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 08:20:54 by wfung             #+#    #+#             */
/*   Updated: 2017/01/12 20:19:54 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_matchx(char *str)								
{
	char	i;												//start strcmp index
	int		j;												//end strcmp index + # counter

	i = '0';
	j = 0;
	while (str++)
	{
		if (*str == '#' && j == 0)
		{
			i = *str;
			printf("i = %c\n", i);
		}
		if (*str == '#' && j < 3)
		{
			j++;
			printf("j = %c\n", j);
		}
		if (*str == '#' && j == 3)
		{
			j = *str;
			if (ft_shape_chk(str, i) >= 1)
				j = 0;
		}
	}
	return (0);
}
