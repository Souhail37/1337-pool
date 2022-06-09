/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:48:14 by sismaili          #+#    #+#             */
/*   Updated: 2021/09/26 17:58:39 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	t;

	a = 0;
	b = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (tab[b] > tab[a])
			{
				t = tab[b];
				tab[b] = tab[a];
				tab[a] = t;
			}
			b++;
		}
		a++;
	}
}
