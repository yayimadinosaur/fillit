/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:29:50 by wfung             #+#    #+#             */
/*   Updated: 2017/01/13 20:34:33 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(void)
{		
	char *str;

	str = "####\n....\n....\n....\n";
	if (ft_chk_input(str) == 1)
	{
		printf("main: chk_input passed\n");
		if (ft_matchx(str) == 1)
		{
			printf("matchx passed\n");
		}
	}
	else
		printf("main: fail chk_input\n");
	return (0);
}
