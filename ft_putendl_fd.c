/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:25:44 by matde-je          #+#    #+#             */
/*   Updated: 2022/11/08 00:09:55 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

/*int main()
{
	int fd2;
	char s[] = "sdfghjk";

	fd2 = open("fd2.txt", O_RDWR);
	ft_putendl_fd(s, fd2);
}*/