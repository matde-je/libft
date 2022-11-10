/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:07:27 by matde-je          #+#    #+#             */
/*   Updated: 2022/11/10 00:14:52 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}
//por o barra zero linha 44. linha 52, inicio da str

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = count_digits(n);
	if (n <= 0)
	{
		num *= -1;
		digits++;
	}
	str_num = malloc(digits + 1);
	if (!str_num)
		return (0);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*str_num = '-';
	return (str_num);
}
