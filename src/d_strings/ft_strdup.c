/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:28:48 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:51:38 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc((ft_strlen(s1) + 1) * 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ptr[ft_strlen(s1)] = '\0';
	return (ptr);
}

/* Duplicates a string s1.
Allocates memory for the duplicate string using malloc.
Copies the contents of s1 to the newly allocated memory 
using ft_memcpy.
Appends a null terminator to the end of the duplicate string.
Parameters:
- s1: Pointer to the string to be duplicated.
Returns:
- Pointer to the newly allocated duplicate string, 
or NULL if memory allocation fails. */
