/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rreis-de <rreis-de@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:44:42 by rreis-de          #+#    #+#             */
/*   Updated: 2022/09/17 13:37:14 by rreis-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	a[] = "hello";
	char	b[] = "heello ";
	char	c[] = "";
	printf("%d\n", ft_str_is_printable(b));
	return(0);
}*/
