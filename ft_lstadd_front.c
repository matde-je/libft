/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:04:12 by matde-je          #+#    #+#             */
/*   Updated: 2022/11/10 01:21:41 by matde-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (0);
// 	new->content = content;
// 	new->next = 0;
// 	return (new);
// }

// int main()
// {
// 	t_list *s1, *s2, *s3;
// 	t_list **lst;

// 	s1 = ft_lstnew("ola");
// 	s2 = malloc(sizeof(t_list));
// 	s1->next = s2;
// 	s2->content = "adeus";
// 	s3 = malloc(sizeof(t_list));
// 	s3->content = "ate";
// 	s3->next = NULL;
// 	ft_lstadd_front(lst, s1);
// 	printf("ola %p", (void *)&s1->content);
// }