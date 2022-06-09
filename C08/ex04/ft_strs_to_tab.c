/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:08:04 by sismaili          #+#    #+#             */
/*   Updated: 2021/10/13 13:59:27 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		l;

	l = ft_strlen(src);
	str = (char *) malloc(sizeof(char) * (l + 1));
	l = 0;
	while (src[l])
	{
		str[l] = src[l];
		l++;
	}
	str[l] = '\0';
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*str;
	int			i;

	i = 0;
	str = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	while (i < ac)
	{
		str[i].size = ft_strlen(av[i]);
		str[i].str = av[i];
		str[i].copy = ft_strdup(av[i]);
		i++;
	}
	str[i].str = 0;
	return (str);
}
