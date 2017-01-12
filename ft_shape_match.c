/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_match.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 13:06:01 by wfung             #+#    #+#             */
/*   Updated: 2017/01/11 17:53:49 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n)
	{
		i++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		ft_match1(char *str)								//input should be perfect
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
			j = str;										//end strcmp index
			i = ft_strncmp("####", j, ft_strlen(j - i));	//cmp strings w/ str start til end vs 19 possible
			if (i == 0)
				ft_lstnew(ft_lstadd(i));					//make list for shape, iterate list
			j = 0;											//reset counter for next if needed
		}
	}
	return (0);												//returns 0 if function fails 
}

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("cmp result = %i\n", ft_match1(av[1]));
	}
	else
		printf("wrong # of args\n");
	return (0);
}
