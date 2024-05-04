/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:11:14 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/04 15:38:47 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_f(unsigned int n, char c)
{
	char	caracter;

	if (c == ' ')
		caracter = '_';
	else
		caracter = n + 48;
	return (caracter);
}
