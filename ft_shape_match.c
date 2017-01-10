/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_match.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 13:06:01 by wfung             #+#    #+#             */
/*   Updated: 2017/01/10 08:14:10 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_match1(char *str)								//input should be perfect, bottom function shape_match is replaced by this one 
{
	char	*i;												//start strcmp index
	char	*j;												//end strcmp index + # counter

	i = 0;
	j = 0;
	while (str++)
	{
		if (str == '#' && j == 0)
			i = str;
		if (str == '#' && j != 3)
			j++;
		if (str == '#' && j == 3)
		{
			j = str;
			ft_match_all([i:j]);							//after getting input str start + end, compare
			j = 0;
		}
	}
	return (0);												//returns 0 if function fails to find 4 #'s to compare
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
