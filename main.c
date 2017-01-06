/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:10:10 by wfung             #+#    #+#             */
/*   Updated: 2017/01/05 20:31:21 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_putstr(ft_shape_letter(ft_build_shape(av[1], ft_chk_input(av[1]))));
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
//read up on 2d array
//linked list with 2 datas; 1 for letter count (4 per shape) & 1 for map (piece touching)
//
//choose between linked list or 2darray or use both?
//
//>>>>>>>>>>>>>>> LOGIC of program <<<<<<<<<<<<<<
//
// 1) check input if valid in chk_input
// 2) pass return values to build_shape? 
// 			a) if error, print error message + free whatever?<<<<<<
// 			b) if valid, shape letter; might not need to malloc, just replace chars
//3)create map
//			a) create all possible solutions
//			b) select smallest possible upper left square
//4)print map
//5)close files? fd?
//6) free stuff?
//7)			maybe should be 1) use open for fd
