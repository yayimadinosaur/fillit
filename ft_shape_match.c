/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_match.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 13:06:01 by wfung             #+#    #+#             */
/*   Updated: 2017/01/09 15:53:54 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_match1(char *str)								//input should be perfect, bottom function shape_match is replaced by this one 
{
	int		i;
	int		j;												//start strcmp index
	int		k;												//end strcmp index + # counter

	i = 0;
	j = 0;
	while (str++)
	{
		if (str == '#' && k == 0)
		{
			j = str;
			k++;
		}
		if (str == '#' && k != 0)
			k++;
		if (str == '#' && k == 3)
		{
			k = i;
			if (ft_strcmp("####", str[j:k]) == 0)
				ft_match_all(str[j:k]);
		}
	}
}

char	*ft_shape_match(char *str, int count)				//perfect str, 2nd param = shape count
{
	int		i;
	int		j;
	char	*buff;

	i = 0;
	j = 0;
	if (ft_match1(str) == 0 || ft_match2(str) == 0 || ft_match3(str) == 0)
		return (NULL);										//check if null is available
	if (!(buff = (char*)malloc(sizeof(char) * (count + 1))))			//make a double pointer for each shape?
		return (NULL);										//see if null is available
	while (str[i] != '\0' && count--)						//not sure if count-- is needed
	{
		i++;
		j++;
	}
	if (count == 0 && str[i] != '\0')
		ft_bzero(str + i, ft_strlen(str) - i);					//set remaining to '\0', check function if need + 1
	buff[j] = '\0';
	return (buff);												//or set value inside char array to null 
}
