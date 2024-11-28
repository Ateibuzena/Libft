/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:29:19 by azubieta          #+#    #+#             */
/*   Updated: 2024/11/22 21:29:55 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_lstadd_back(t_list_42 **lst, t_list_42 *new)
{
	t_list_42	*sublist;

	sublist = *lst;
	if (!sublist)
	{
		*lst = new;
		return ;
	}
	while (sublist->next)
		sublist = sublist->next;
	sublist->next = new;
}
