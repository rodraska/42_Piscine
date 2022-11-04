/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:16:43 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/21 12:13:41 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	k;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\n' || base[i] == '\t' || base[i] == '\v'
			|| base[i] == '\f' || base[i] == '\r')
			return (0);
		k = i + 1;
		while (base[k] != '\0')
		{
			if (base[i] == base[k])
				return (0);
			k++;
		}
		i++;
	}
	if (i > 1)
		return (i);
	else
		return (0);
}

int	whitespaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	nb_base(char c, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (c == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	num;
	int	nb;
	int	base_size;

	num = 0;
	i = 0;
	base_size = check_base(base);
	if (base_size >= 2)
	{
		sign = whitespaces(str, &i);
		nb = nb_base(str[i], base);
		while (nb != -1)
		{
			num = (num * base_size) + nb;
			i++;
			nb = nb_base(str[i], base);
		}
		return (num *= sign);
	}
	return (0);
}
