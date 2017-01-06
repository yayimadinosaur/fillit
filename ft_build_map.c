/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:36:08 by wfung             #+#    #+#             */
/*   Updated: 2017/01/05 17:45:29 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_build_map(char *str, int n)	//n = # of shapes
{
	int		i;		//counter for str
	int		j;		//counter for shapes : might not need; can compare i to i / x = n?
	char	*buff;

	i = 0;
	if (!(buff = (char*)malloc(sizeof(char) * n + 1)))
		return (NULL);			//check if we need error message if fail
	while (str[i] != '\0')
	{
		buff[i] == str[i];
		i++;
	}
	buff[i] = '\0';
	return (buff);
}

// input will have no errors because chk_shape checked
