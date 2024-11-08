/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-abbo <sel-abbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 02:01:20 by sel-abbo          #+#    #+#             */
/*   Updated: 2024/11/08 18:47:26 by sel-abbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*str;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	str = *lst;
	while (str)
	{
		tmp = str;
		str = str->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
