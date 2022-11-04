/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:41:13 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/21 12:07:23 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_char(char c)
{
	write(1, &c, 1);
}

int	check_base(char *str)
{
	int	i;
	int	k;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r')
			return (0);
		k = i + 1;
		while (str[k] != '\0')
		{
			if (str[i] == str[k])
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	mult;

	mult = check_base(base);
	if (mult != 0)
	{
		if (nbr == -2147483648)
		{
			ft_char('-');
			ft_putnbr_base(2147483648 / mult, base);
			nbr = 2147483648 % mult;
		}
		if (nbr < 0)
		{
			ft_char('-');
			nbr *= -1;
		}
		if (nbr < mult)
		{
			ft_char(base[nbr]);
			return ;
		}
		else
			ft_putnbr_base(nbr / mult, base);
		ft_putnbr_base(nbr % mult, base);
	}
}
/*
int	main(void)
{
	int	a = -2147483648;
	char	b[] = "0123456789";
	ft_putnbr_base(a, b);
	return (0);
}*/
