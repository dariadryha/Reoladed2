/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 18:46:29 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/25 18:46:30 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int k;

	k = 0;
	while (str[k] != '\0')
	{
		ft_putchar(str[k]);
		k++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf;

	i = 0;
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		fd = open(argv[1], O_RDWR);
		while (read(fd, &buf, 1) != 0)
		{
			ft_putchar(buf);
			i++;
		}
		close(fd);
		return (0);
	}
}
