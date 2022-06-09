/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:22:49 by sismaili          #+#    #+#             */
/*   Updated: 2021/10/13 08:37:28 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	l;
	int	i;

	l = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * l);
	while (i < l)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
