/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_matchtest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 08:20:54 by wfung             #+#    #+#             */
/*   Updated: 2017/01/13 20:34:26 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_matchx(char *str)								
{
	char	*c;								//start strcmp index
	int		j;								//end strcmp index + # counter
	int		i;
						//str[i] was *str
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' || str[i] == '.' || str[i] == '\n')
		{
			if (str[i] == '#')
			{
				if (j < 4)
				{
					if (j == 0)
						c = &str[i];
					j++;
					printf("matchx [j = %i]\n", j);
				}
				if (j == 4)
				{
					printf("j == 4 start\n");
					if (ft_shape_chk(c) > 0)
					{
						printf("[j == %i] activate ft_shape_chk\n", j);
						j = 0;
					}
					else if (ft_shape_chk(c) == 0)
						printf("shape_chk failed after matchx\nj == %i\ni == %i\n",i, j);
				}
			}
		}
		if (str[i] != '#' && str[i] != '.' && str[i] != '\n')
		{
			printf("matchx input invalid [j] = %i\n", j);
			printf("i = %i\n", i);
			return (0);
		}
		i++;
	}
	return (1);
}
