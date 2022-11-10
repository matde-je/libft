/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:02:32 by marvin            #+#    #+#             */
/*   Updated: 2022/10/25 18:53:56 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//to find little in big. search only len char no big
//retorna a partir do lil mas ate ao final do big. tem de tar o lil todo no big
char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	m;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i])
	{
		m = 0;
		while (big[i + m] == little[m] && (i + m) < len)
		{
			if (little[m + 1] == '\0')
				return ((char *)&big[i]);
			m++;
		}
		i++;
	}
	return (0);
}
