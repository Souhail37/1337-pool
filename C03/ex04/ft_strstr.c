/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:36:53 by sismaili          #+#    #+#             */
/*   Updated: 2021/09/30 16:31:18 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cmp(char *str, char *to_find)
{
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (cmp(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
