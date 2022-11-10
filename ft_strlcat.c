/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:41:29 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 19:05:12 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//retornar menos que o dest total, nao copias todo o dest
//quando o destsize > strlen(dest) vai copiar a partir do fim do dest
// para ser dest + src so ate o numero maximo de caracteres do destsize
//o resto do source depois de ser copiado para o dest
// ate ao d (ate ao destsize) e dps para a frente
//colocar nulo no fim
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	c;
	size_t	d;

	if (destsize <= ft_strlen(dest))
		return (destsize + ft_strlen(src));
	c = ft_strlen(dest);
	d = 0;
	while (src[d] && c < (destsize - 1))
	{
		dest[c] = src[d];
		c++;
		d++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[d]));
}
