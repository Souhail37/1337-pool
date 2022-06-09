/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:50:32 by sismaili          #+#    #+#             */
/*   Updated: 2021/10/08 12:02:30 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_cmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	ft_write(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (av[i] != '\0')
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
		return (0);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*p;

	p = *a;
	*a = *b;
	*b = p;
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = i + 1;
			while (j < argc)
			{
				if (ft_cmp(argv[i], argv[j]) > 0)
					ft_swap(&argv[i], &argv[j]);
				j++;
			}
			i++;
		}
		ft_write(argc, argv);
	}
	return (0);
}
