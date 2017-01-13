/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_nl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 17:35:27 by wfung             #+#    #+#             */
/*   Updated: 2017/01/08 19:16:26 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_convert_nl(char *str)
{														//only perfect strings are passed
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n' && str[i - 1] != '\n')		//ending condition for current shape, input str is perfect
			str[i] = '.';								//doesn't convert past 16 char counts
		i++;											//(every: 16 = shape, 17 = '\n', 18 = next shape)
	}
	return (str);										//should work with 26 inputs!!!
}

char	*ft_strtrim_c(char *str, int n)
{
	int		i;

	i = 0;
	while (str[i] != '#')								//move til first # (symbol for shape)
		i++;
	while (str[i] != '\n')
	{

		i++;
	}
	return (j);											//return buff, each instance has 
}
