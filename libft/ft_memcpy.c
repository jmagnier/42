/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <jmagnier@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 16:57:36 by jmagnier          #+#    #+#             */
/*   Updated: 2015/12/21 17:04:36 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *srccpy;
	unsigned char *dstcpy;

	srccpy = (unsigned char *)src;
	dstcpy = (unsigned char *)dst;
	while (n--;)
		*dstcpy++ = *srccpy++;
	return (dst);
}