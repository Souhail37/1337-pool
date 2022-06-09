/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 08:20:13 by sismaili          #+#    #+#             */
/*   Updated: 2021/10/13 11:49:56 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	t_len;
	int	i;

	t_len = ft_strlen(sep) * (size - 1);
	i = 0;
	while (i < size)
	{
		t_len = t_len * ft_strlen(strs[i]);
		i++;
	}
	return (t_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	i = 1;
	res = (char *)malloc(ft_total_len(size, strs, sep));
	if (size == 0)
		return (res = 0);
	ft_strcat(res, strs[0]);
	while (i < size)
	{
		ft_strcat(res, sep);
		ft_strcat(res, strs[i]);
		i++;
	}
	return (res);
}
