/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:35:00 by sismaili          #+#    #+#             */
/*   Updated: 2021/09/26 06:45:44 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n[2];

	n[0] = -1;
	while (n[0] < 98)
	{
		n[0]++;
		n[1] = n[0];
		while (n[1] < 99)
		{
			n[1]++;
			ft_putchar (n[0] / 10 + 48);
			ft_putchar (n[0] % 10 + 48);
			ft_putchar (' ');
			ft_putchar (n[1] / 10 + 48);
			ft_putchar (n[1] % 10 + 48);
			if (n[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
