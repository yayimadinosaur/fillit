/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:10:10 by wfung             #+#    #+#             */
/*   Updated: 2017/01/11 17:52:54 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>		//to test print output

int		main(void)		//example practice to create square exterior
{
	char	k;
	char	grid[10][10];
	int 	x = 0;
	int		y = 0;

	k = 65;
	while (x < 10)
	{
		while (y < 10)
		{
			if (y == 0 || y == 9)
				k = '*';
			else if (x == 0 || x == 9)
				k = '$';
			else if (x == y)
				k = '#';
			else
				k = ' ';
			grid[x][y] = k;
			printf("%c", grid[x][y]);
			y++;
		}
		printf("\n");
		y = 0;
		x++;
	}














/*	
	printf("42 *, 43 +, 44 , 45 -\n");
	grid[i][j] = '*';
	grid[i][j + 1] = '!';
	grid[j + 1][i] = '@';
	grid[j + 1][i + 1] = '#';
	while (i < 2 )
	{
		while (j < 2)
		{
			printf("%c ", grid[i][j]);
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
*/

	/*
	if (ac == 2)
	{
		ft_putstr(ft_shape_letter(ft_build_shape(av[1], ft_chk_input(av[1]))));
		ft_putchar('\n');
		ft_putstr("func successful\n");
	}

	{
		ft_putstr("failure\n");
		ft_putchar('\n');
	}
*/	return (0);
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
//   >>>open file??maybe should be 1) use open for fd
// 1) check input if valid in chk_input
// 		a)chk input size + # of shapes
// 		b)chk shape(s)
// 2) pass return values to build_shape? 
// 			a) if error, print error message + free whatever?<<<<<<
// 			b) if valid, shape letter; might not need to malloc, just replace chars
// 3)match shape
// 			a)set variations as same
// 4)create map
//			a) create all possible solutions
//			b) select smallest possible upper left square
// 5)print map
// 6)close files? fd? exit?
// 7) free stuff?
