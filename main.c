/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:10:10 by wfung             #+#    #+#             */
/*   Updated: 2017/01/05 17:32:26 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr(ft_build_shape(av[1], ft_chk_input(av[1])));
		ft_putchar('\n');
		ft_putstr("func successful\n");
	}
	else
	{
		ft_putstr("failure\n");
		ft_putchar('\n');
	}
	return (0);
}


					//build shape == ft_strdup

// TO DO LIST
//
// make variations of shape EQUAL
