/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 08:54:54 by sismaili          #+#    #+#             */
/*   Updated: 2021/10/12 15:59:29 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		l;

	l = 0;
	while (src[l])
		l++;
	str = (char *)malloc(sizeof(l + 1));
	l = 0;
	while (src[l])
	{
		str[l] = src[l];
		l++;
	}
	str[l] = '\0';
	return (str);
}
