/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:02:33 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/25 18:02:34 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char *))
{
	int j;
	int count;

	j = 0;
	count = 0;
	while (tab[j] != 0)
	{
		if (f(tab[j]) == 1)
			count++;
		j++;
	}
	return (count);
}
