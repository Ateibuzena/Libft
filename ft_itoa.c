/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:32:30 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/04 21:31:17 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	t_Itoa	variables;

	variables.i = n;
	variables.index = ft_digitcount(n);
	variables.ptr = malloc((ft_digitcount(n) + 1) * sizeof(char));
	if (!variables.ptr)
		return (NULL);
	variables.temp = variables.ptr;
	if (variables.i < 0)
	{
		*variables.temp = '-';
		variables.i = -variables.i;
	}
	variables.temp += ft_digitcount(n);
	*variables.temp = '\0';
	variables.temp--;
	while (variables.i / 10 != 0)
	{
		*variables.temp = variables.i % 10 + '0';
		variables.i = variables.i / 10;
		variables.temp--;
	}
	*variables.temp = variables.i % 10 + '0';
	return (variables.ptr);
}

/*
#include <stdio.h>

int main(void)
{
    int     n;
    char    *ptr;
    int     count;
    n = 2147483646;
    count = ft_digitcount(n);
    
    ptr = ft_itoa(n);
    printf("%s\n", ptr);
    return (0);
}*/