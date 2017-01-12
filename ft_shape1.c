/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:54:35 by wfung             #+#    #+#             */
/*   Updated: 2017/01/11 19:53:28 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_shape1(char *str, char *start, char *end)
{
	if (ft_strncmp("####", start, 4) == 0)
		return (1);
	else if (ft_strncmp("#...\n#...\n#...\n#", start, 16) == 0)
		return (2);
	else if (ft_strncmp("##..\n##", start, 7) == 0)
		return (3);
	else if (ft_strncmp("##.\n.#", start, 7) == 0)
		return (4);
	else if (ft_strncmp("#...\n##..\n#", start, 11) == 0)
		return (5);
	else if (ft_strncmp("#..\n##..\n.#", start, 12) == 0)
		return (6);
	else if (ft_strncmp("#..\n###", start, 8) == 0)
		return (7);
	else if (ft_strncmp("##..\n.##", start, 8) == 0)
		return (8);
	else if (ft_strncmp("#..\n##..\n#", start, 11) == 0)
		return (9);
	else if (ft_strncmp("##.\n##", start, 7) == 0)
		return (10);
	else if (ft_strncmp("#...\n##..\n.#", start, 12) == 0)
		return (11);
	else
		return (0);
}

int		ft_shape2(char *str, char *start, char *end)
{
	if (ft_strncmp("#...\n#...\n##", start, 12) == 0)
		return (12);
	else if (ft_strncmp("#.\n###", start, 8) == 0)
		return (13);
	else if (ft_strncmp("##..\n.#..\n.#", start, 12) == 0)
		return (14);
	else if (ft_strncmp("###.\n#", start, 6) == 0)
		return (15);
	else if (ft_strncmp("#..\n.#..\n##", start, 12) == 0)
		return (16);
	else if (ft_strncmp("#...\n###", start, 8) == 0)
		return (17);
	else if (ft_strncmp("##..\n#...\n#", start, 11 ) == 0)
		return (18);
	else if (ft_strncmp("#...\n###", start, 8) == 0)
		return (19);
	else
		return (0);
}

int		ft_shape_chk(char *str, char *start, char *end)
{
	if (str_valid)
		return (ft_shape1(str, start) + ft_shape2(str, start));
	else
		return (0);
}
