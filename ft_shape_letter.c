/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_letter.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 19:40:02 by wfung             #+#    #+#             */
/*   Updated: 2017/01/05 20:13:51 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_shape_letter(char *str, int n)
{
	int		i;			//counter for input str (passed str is 100% correct)
	char	c;			//letter assigning for shape
	char	*buff;		//changed string

	i = 0;
	c = 'A';
	if (!(buff = (char*)malloc(sizeof(char) * (n + 1))))
			return (NULL);
	while (str[i] != '\0' && i < n)		//not sure if n is necessary
	{
		if (str[i] == '#')			//assign letter for tetrimino; every 4 pieces
			buff[i] = c;
		if (str[i] == '.' || str[i] == '\n')
			buff[i] = str[i];		//copy over remaining pieces; . \n
		if (i / 26 >= 1 && i / 26 <= 26)
			c++;					//after every shape, increase letter counter
		i++;
	}
	buff[i] = '\0';
	return (buff);
}
