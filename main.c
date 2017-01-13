/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:29:50 by wfung             #+#    #+#             */
/*   Updated: 2017/01/12 20:19:56 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(void)
{		
	char *str;

	str = "####\n....\n....\n....\n";
	if (ft_chk_input(str) > 0)
		printf("chk_input passed\n");
/*		if (ft_chk_input(av[1]) == 0)
			printf("fail chk_input\n");
		else if (ft_chk_input(av[1]) > 0)
		{
			printf("valid input shapes = %i\n", ft_chk_input(av[1]));
			printf("chk_input passed\n");
			printf("match result = %i\n", ft_matchx(av[1]));
		}
		*/
	else if (ft_chk_input(str) == 0)
		printf("fail chk_input\n");
	return (0);
}
