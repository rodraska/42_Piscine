/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:03:36 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/27 12:05:52 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_size(int nbr, char *base);
void	ft_putnbr_base(int nbr, char *base, char *nbr_final);

int	check_base(char *base)
{
	int	i;
	int	k;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == 32
			|| (base[i] >= 9 && base[i] <= 13))
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

int	white_spaces(char *str, int *ptr_i)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
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
	nb = 0;
	i = 0;
	base_size = check_base(base);
	if (base_size >= 2)
	{
		sign = white_spaces(str, &i);
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*s;
	int		int_nb;
	int		str_size;

	if (check_base(base_to) == 0 || check_base(base_from) == 0)
		return (0);
	int_nb = ft_atoi_base(nbr, base_from);
	str_size = ft_str_size(int_nb, base_to);
	s = (char *)malloc(sizeof(char) * (str_size + 1));
	if (!s)
		return (0);
	ft_putnbr_base(int_nb, base_to, s);
	s[str_size] = '\0';
	return (s);
}
/*
int	main(void)
{
	char	str[] = "-2147483648";	
	char	base_from[] = "0123456789";
	char	base_to[] = "ab";
	char	*d;

	d = ft_convert_base(str, base_from, base_to);
	if (d == NULL)
		return (1);
	printf("%s", d);
	free(d);
	return (0);
}*/
/*
int		main(void)
{
	char nbr[] = "-+--2147483648";
	char base_to[] = "0123456789ABCDEF";
	char base_from[] = "0123456789";
	char *res;

	res = ft_convert_base(nbr, base_from, base_to);
	if (res == NULL)
		return (1);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
