/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:16:03 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:51:22 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

void	ft_putnbr_u(unsigned int i, int fd, int *count)
{
	if (i / 10 != 0)
		ft_putnbr_u((i / 10), fd, count);
	ft_putchar_printf((i % 10 + '0'), fd, count);
}

void	ft_call_putnbr_u(va_list *args, int fd, int *count)
{
	unsigned int	i;

	i = va_arg(*args, unsigned int);
	ft_putnbr_u(i, fd, count);
}
