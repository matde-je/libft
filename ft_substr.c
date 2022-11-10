/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:10:13 by matde-je          #+#    #+#             */
/*   Updated: 2022/11/08 15:22:14 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* size_t can store the maximum size of a
theoretically possible object of any type (including array).
size_t is commonly used for array indexing and loop counting.
Programs that use other types, such as unsigned int, 
for array indexing may fail on, e.g. 64-bit systems when
the index exceeds UINT_MAX or if it relies on 32-bit modular arithmetic. */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (start > ft_strlen(s))
		len = 0;
	if (len >= ft_strlen(s) - start)
		dest = malloc(ft_strlen(s) - start + 1);
	else
		dest = malloc(len + 1);
	if (!dest)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
	{
		dest[j] = s[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}	

/*int main(void)
{
	printf("%c", -150);
}*/