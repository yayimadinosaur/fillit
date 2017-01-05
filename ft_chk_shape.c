/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chk_shape.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 19:43:47 by wfung             #+#    #+#             */
/*   Updated: 2017/01/04 20:06:29 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_chk_shape(char *str)
{
	int		i;		//interate index for string of shapes
	int		j;		//counter for # of shapes

	i = 0;
	j = 0;			//if j == 0 means no shapes; if j >= 1 && <= 26 limit; if j > 27 error
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '#')		//valid input chk
			i++;
		else if (str[i] == '\n' && (i / 5) >= 0 && (i / 5) <= 20)	//4x4 shape chk
			i++;
		else if (str[i] == '\n' && i == 21)		//shape counter - every 21 instance
		{
			i++;
			j++;	//shape count++
		}
	}
}
