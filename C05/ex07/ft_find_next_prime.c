/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:06:05 by sismaili          #+#    #+#             */
/*   Updated: 2021/10/05 21:34:51 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb / 5)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_prime(nb))
		nb++;
	return (nb);
}
