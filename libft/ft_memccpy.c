/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <jmagnier@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 17:30:17 by jmagnier          #+#    #+#             */
/*   Updated: 2015/12/21 17:30:20 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dstcpy;
	unsigned char *srccpy;

	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned char *)src;

	while (n-- || src != c)
		*dstcpy++ = *srccpy++;
	return (dst)
}