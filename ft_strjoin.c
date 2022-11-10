/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:26:37 by matde-je          #+#    #+#             */
/*   Updated: 2022/10/29 22:21:57 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str(char const *s1, char const *s2, char *final)
{
	size_t	j;
	size_t	i;
	size_t	m;

	j = 0;
	i = 0;
	m = 0;
	while (s1[i] != '\0')
	{
		final[m] = s1[i];
		i++;
		m++;
	}
	while (s2[j] != '\0')
	{
		final[i] = s2[j];
		j++;
		i++;
	}
	final[i] = '\0';
	return (final);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;

	final = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!final)
		return (0);
	final = ft_str(s1, s2, final);
	return (final);
}

/*int main(void)
{
    printf("%s", ft_strjoin("he", "llo"));
}*/