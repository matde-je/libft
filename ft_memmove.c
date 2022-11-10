/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:50:07 by marvin            #+#    #+#             */
/*   Updated: 2022/10/29 00:14:07 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//n is the number of bytes to be copied from source to dest
//copiar de tras para a frente por causa do overlap
//quando dest>src retorna o src copiado no dest e o resto 
//que falta do dest ate ao fim da str

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*dest1;

	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	i = 0;
	if (!dest && !src)
		return (0);
	if (dest1 > src1)
	{
		n++;
		while (--n > 0)
			dest1[n - 1] = src1[n - 1];
	}
	else
	{
		while (i < n)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return (dest);
}
