/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_match.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 13:06:01 by wfung             #+#    #+#             */
/*   Updated: 2017/01/06 20:07:55 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_shape_match(char *str, int n)	//not sure if n is needed? used for stopper
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
		*array[i] = str[i];
	}
}
