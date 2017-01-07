/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 20:50:06 by wfung             #+#    #+#             */
/*   Updated: 2017/01/06 20:16:10 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_2d_array(char *str, int i)
{
	int		i;
	int		j;
	char	**array;

	i = 0;
	j = 0;
	if (!(array = (char**)malloc(sizeof(char*) * n + 1)))
	{
		free(array);
		return (NULL);
	}
	while (str[i] != '\0')
	{
		*array[j] = str[i];
		if (str[i] == '\n')
		{
			*array++;
			j = 0;
		}
		i++;
		j++;
	}
	**array = NULL;
	return (array);
}


//		decide on whether to use 2d array || linked lists w/ 2 data || both
//
//		figure out smallest square possible for i (# of shapes)
//
//		make function 2d_array build the map (fitting pieces together or attempt to?
//
//		name the different solutions out by letter; preferably 'a' - whatever
//					because letter per shape is used by 'A' - 'Z'
