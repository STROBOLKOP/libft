/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efret <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:48:51 by efret             #+#    #+#             */
/*   Updated: 2023/11/28 18:42:52 by efret            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nbytes;
	void	*res;

	nbytes = nmemb * size;
	if (nbytes < nmemb || nbytes < size)
		return (NULL);
	res = malloc(nbytes);
	if (!res)
		return (NULL);
	ft_bzero(res, nbytes);
	return (res);
}
