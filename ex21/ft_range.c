/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 17:36:29 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/24 17:36:30 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *temp;
	int length;
	int j;

	j = 0;
	temp = NULL;
	length = max - min;
	if (min < max)
	{
		temp = (int *)malloc(sizeof(int) * length);
		while (min < max)
		{
			temp[j] = min;
			j++;
			min++;
		}
	}
	return (temp);
}
