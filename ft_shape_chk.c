/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shape_chk.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:36:17 by wfung             #+#    #+#             */
/*   Updated: 2017/01/12 19:25:12 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_shape1(char start)
{
	if (ft_strncmp("####", &start, 4) == 0)
		return (1);
	else if (ft_strncmp("#...\n#...\n#...\n#", &start, 16) == 0)
		return (2);
	else if (ft_strncmp("##..\n##", &start, 7) == 0)
		return (3);
	else if (ft_strncmp("###.\n.#", &start, 7) == 0)
		return (4);
	else if (ft_strncmp("#...\n##..\n#", &start, 11) == 0)
		return (5);
	else if (ft_strncmp("#..\n##..\n.#", &start, 11) == 0)
		return (6);
	else if (ft_strncmp("#..\n###", &start, 7) == 0)
		return (7);
	else if (ft_strncmp("##..\n.##", &start, 8) == 0)
		return (8);
	else if (ft_strncmp("#..\n##..\n#", &start, 10) == 0)
		return (9);
	else if (ft_strncmp("##.\n##", &start, 6) == 0)
		return (10);
	else if (ft_strncmp("#...\n##..\n.#", &start, 12) == 0)
		return (11);
	else
		return (0);
}

int		ft_shape2(char start)
{
	if (ft_strncmp("#...\n#...\n##", &start, 12) == 0)
		return (12);
	else if (ft_strncmp("#.\n###", &start, 6) == 0)
		return (13);
	else if (ft_strncmp("##..\n.#..\n.#", &start, 12) == 0)
		return (14);
	else if (ft_strncmp("###.\n#", &start, 6) == 0)
		return (15);
	else if (ft_strncmp("#..\n.#..\n##", &start, 11) == 0)
		return (16);
	else if (ft_strncmp("#...\n###", &start, 8) == 0)
		return (17);
	else if (ft_strncmp("##..\n#...\n#", &start, 11 ) == 0)
		return (18);
	else if (ft_strncmp("#...\n###", &start, 8) == 0)
		return (19);
	else
		return (0);
}

int		ft_shape_chk(char *str, char start)
{
	if (str)
		return (ft_shape1(start) + ft_shape2(start));
	else
		return (0);
}
