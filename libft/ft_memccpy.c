/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <jmagnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/22 19:37:00 by jmagnier          #+#    #+#             */
/*   Updated: 2015/12/22 20:30:51 by jmagnier         ###   ########.fr       */
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