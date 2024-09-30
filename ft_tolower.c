/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:59:10 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/25 15:18:42 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c) == 1 && (c >= 65 && c <= 90))
		return (c + 32);
	return (c);
}

/* Converts the given character to lowercase if it is an uppercase letter.
Parameters:
- c: The character to be converted.
Returns:
- Lowercase version of the character if it is an uppercase letter,
otherwise returns the character unchanged. */
