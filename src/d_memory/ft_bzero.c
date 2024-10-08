/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:49:04 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:50:50 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

void	ft_bzero(void *array, t_size len)
{
	ft_memset(array, 0, len);
}

/* Sets the first len bytes of the memory area pointed to by array to zero.
Calls the ft_memset function to achieve this.
Parameters:
- array: Pointer to the memory area.
- len: Number of bytes to be set to zero. */
