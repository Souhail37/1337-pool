/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 12:33:58 by sismaili          #+#    #+#             */
/*   Updated: 2021/10/04 17:59:51 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_wrong(int wr, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		wr = 1;
	while (base[i] != '\0' && wr == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				wr = 1;
		}
		if (base[i] == '+' || base[j] == '-')
			wr = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lb;
	int		wr;
	long	n;

	lb = 0;
	wr = 0;
	ft_wrong(wr, base);
	n = nbr;
	if (wr == 0)
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
		}
		while (base[lb])
			lb++;
		if (n < lb)
			ft_putchar(base[n]);
		if ((n >= lb) && (lb != 0))
		{
			ft_putnbr_base(n / lb, base);
			ft_putnbr_base(n % lb, base);
		}
	}
}
