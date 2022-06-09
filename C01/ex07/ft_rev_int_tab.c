/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:53:59 by sismaili          #+#    #+#             */
/*   Updated: 2021/09/26 14:19:56 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	i;

	i = 0;
	size--;
	while (i <= size)
	{
		n = tab[size];
		tab[size] = tab[i];
		tab[i] = n;
		size--;
		i++;
	}
}