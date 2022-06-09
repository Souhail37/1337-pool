/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:52:20 by sismaili          #+#    #+#             */
/*   Updated: 2021/09/29 12:26:24 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	p;

	i = 0;
	p = 1;
	while (str[i] != '\0')
	{
		if (ft_char(str[i]))
		{
			if (p && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!p && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			p = 0;
		}
		else
			p = 1;
		i++;
	}
	return (str);
}
