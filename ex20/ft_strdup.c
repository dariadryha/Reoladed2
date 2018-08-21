/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 17:06:55 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/24 17:06:56 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int p;

	p = 0;
	while (str[p] != '\0')
		p++;
	return (p);
}

char	*ft_strdup(char *src)
{
	int		t;
	int		k;
	char	*temp;

	k = 0;
	t = ft_strlen(src);
	temp = (char *)malloc(sizeof(char) * (t + 1));
	while (src[k] != '\0')
	{
		temp[k] = src[k];
		k++;
	}
	temp[k] = '\0';
	return (temp);
}
