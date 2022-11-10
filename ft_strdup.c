/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:04:56 by marvin            #+#    #+#             */
/*   Updated: 2022/11/04 20:35:52 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*sizeof amount of memory in bytes.
 sizeof pointer which is 8 bytes on linux (64-bit system)
 4 on 32 bit system*/

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	str = malloc(ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
