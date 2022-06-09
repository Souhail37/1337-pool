/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sismaili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:19:17 by sismaili          #+#    #+#             */
/*   Updated: 2021/10/04 11:35:20 by sismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_wrong(int wr, char *base)
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
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\t' || base[i] == '\n'
			|| base[i] == '\f' || base[i] == '\r' || base[i] == '\v')
			wr = 1;
		else
			i++;
	}
	return (wr);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	if (str[i] >= 'a' && str[i] <= 'z')
		return (0);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (*str);
}

int	ft_atoi_base(char *str, char *base)
{
	int	lb;
	int	wr;
	int	i;

	lb = 0;
	wr = 0;
	i = 0;
	ft_wrong(wr, base);
	if (wr == 0)
	{
		ft_atoi(str);
		while (base[lb])
			lb++;
		if (str[i] < lb)
			return (str[i]);
		if (str[i] >= lb)
		{
			return (*base);
		}
	}
	return (wr);
}
