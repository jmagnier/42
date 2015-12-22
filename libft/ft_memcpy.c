/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <jmagnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 20:30:26 by jmagnier          #+#    #+#             */
/*   Updated: 2015/12/22 20:31:05 by jmagnier         ###   ########.fr       */
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