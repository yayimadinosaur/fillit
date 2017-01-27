/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oldshape_match.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 23:25:17 by wfung             #+#    #+#             */
/*   Updated: 2017/01/26 23:25:18 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



//		OLD SHAPE MATCH
#include "fillit.h"

int		ft_match1(char *str)								//input should be perfect
{
	char	*i;												//start strcmp index
	char	*j;												//end strcmp index + # counter
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str++)
	{
		if (*str == '#' && k == 0)
			i = str;
		if (*str == '#' && k != 3)
		{
			printf("k = '%i\n'", k);
			k++;
		}
		if (*str == '#' && k == 3)
		{
			j = str;										//end strcmp index
			if (ft_strncmp("####", j, ft_strlen(j) - ft_strlen(i) != 0))
				return (1);
			k = 0;											//reset counter for next if needed
		}
	}
	return (0);												//returns 0 if function fails 
}

/*
int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("cmp result = %i\n", ft_shape_chk(av[1]));
	}
	else
		printf("wrong # of args\n");
	return (0);
}
*/
