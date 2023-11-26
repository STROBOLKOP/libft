/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efret <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:38:12 by efret             #+#    #+#             */
/*   Updated: 2023/11/21 18:53:07 by efret            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 0)
		return (c);
	c = (unsigned char)c;
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
