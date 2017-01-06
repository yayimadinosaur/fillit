/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chk_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 17:32:00 by wfung             #+#    #+#             */
/*   Updated: 2017/01/05 17:32:03 by wfung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_chk_input(char *str)
{
	int		i;		//interate index for string of shapes
	int		j;		//counter for # of shapes

	i = 0;
	j = 0;			//if j == 0 means no shapes; if j >= 1 && <= 26 limit; if j > 27 error
	if (!str)
		j = 0;
	while (str[i] != '\0')		//chk does not have a limit to check if input overflow
	{
		if (str[i] == '.' || str[i] == '#')		//valid input chk
			i++;
		else if (str[i] == '\n' && (i / 5) >= 1 && (i / 5) <= 26)	//line by line check
			i++;
		else if (str[i] == '\n' && (i / 21) >= 1 && (i / 21) <= 26)	
		{			//shape chk/counter - every 21 instance
			i++;
			j++;	//shape count++
		}
	}
	if (i > 130 || (i % j) != 0 || j > 26)
		j = 0;		//wrong argument len; not enough or too many
	return (j);		//if j == 0 argument has errors; else if j > 0 && <= 26 is correct
}
