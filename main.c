/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 16:50:10 by wfung             #+#    #+#             */
/*   Updated: 2017/01/15 19:44:16 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(void)
{		
	char *str;		//passed in str to test

	str = 	"####\n"
			"....\n"
			"....\n"
			"....\n";
	if (ft_chk_input(str) == 1)
	{
		printf("main: chk_input finished\n-----\n");
		if (ft_matchx(str) == 1)
		{
			printf("matchx passed\n");
		}
	}
	else
		printf("main: fail chk_input\n");
	return (0);
}

/* sample.fillit from fillit pdf

...#$	5
...#$	5
...#$	5
...#$	5
$		1
....$	5
....$	5
....$	5
####$	5
$		1
.###$	5
...#$	5
....$	5
....$	5
$		1
....$	5
..##$	5
.##.$	5
....$	5
$>		1
*/
