/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddryha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 12:53:53 by ddryha            #+#    #+#             */
/*   Updated: 2017/10/24 12:53:54 by ddryha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0')
		j++;
	return (s1[j] - s2[j]);
}

void	ft_sort(char **argv, int argc)
{
	int		a;
	int		p;
	int		x;
	char	*temp;

	a = 1;
	p = argc;
	while (a != 0)
	{
		a = 0;
		x = 1;
		argc = p;
		while (argc > 2)
		{
			if (ft_strcmp(argv[x], argv[x + 1]) > 0)
			{
				temp = argv[x];
				argv[x] = argv[x + 1];
				argv[x + 1] = temp;
				a = 1;
			}
			x++;
			argc--;
		}
	}
}

int		main(int argc, char **argv)
{
	int z;

	z = 1;
	ft_sort(argv, argc);
	while (argc > 1)
	{
		ft_putstr(argv[z]);
		ft_putchar('\n');
		argc--;
		z++;
	}
	return (0);
}
