/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 20:03:06 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/23 20:03:08 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int j;
	int x;

	j = 1;
	while (j <= nb)
	{
		x = nb / j;
		if ((nb % j) == 0 && x == j)
			return (x);
		j++;
	}
	return (0);
}
