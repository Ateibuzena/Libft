/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:46:22 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:22:32 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*
This function, ft_putstr_fd, writes the string s to the specified file 
descriptor fd.

Writing String:
It uses the write system call to write the entire string s to the file 
descriptor fd.
The write function writes the number of bytes equal to the length of the 
string s, obtained using ft_strlen, starting from the address of the string s.
*/