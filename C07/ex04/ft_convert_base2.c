/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:03:42 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/27 12:05:18 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_base(char *base);

int	ft_str_size(int nbr, char *base)
{
	int			str_size;
	int			base_size;
	long int	nb;

	nb = (long)nbr;
	base_size = check_base(base);
	str_size = 0;
	if (nb < 0)
	{
		nb *= -1;
		str_size++;
	}
	while (nb > 0)
	{
		nb = nb / base_size;
		str_size++;
	}
	return (str_size);
}

void	ft_putnbr_base(int nbr, char *base, char *nbr_final)
{
	int			base_size;
	int			str_size;
	long int	nb;

	nb = (long)nbr;
	base_size = check_base(base);
	str_size = ft_str_size(nbr, base);
	if (nb < 0)
	{
		nbr_final[0] = '-';
		nb *= -1;
	}
	str_size--;
	while (nb >= base_size)
	{
		nbr_final[str_size] = base[nb % base_size];
		nb /= base_size;
		str_size--;
	}
	if (nb < base_size)
		nbr_final[str_size] = base[nb];
}
