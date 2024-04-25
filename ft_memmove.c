/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:41:48 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/11 16:35:56 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdst == 0 && psrc == 0)
		return (0);
	if (pdst > psrc)
	{
		psrc += len;
		pdst += len;
		while (len--)
			*(--pdst) = *(--psrc);
	}
	else if (pdst < psrc)
	{
		while (len--)
			*(pdst++) = *(psrc++);
	}
	return (dst);
}
