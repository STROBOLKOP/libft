/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efret <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:50:20 by efret             #+#    #+#             */
/*   Updated: 2023/11/21 18:22:04 by efret            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c < 0)
		return (c);
	c = (unsigned char)c;
	if ('A' <= c && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}
