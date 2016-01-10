/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <jmagnier@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 17:43:59 by jmagnier          #+#    #+#             */
/*   Updated: 2016/01/10 17:27:27 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void    *memmove(void *dest, const void *src, size_t n)
{
	unsigned char *dsttemp;
	unsigned char *srctemp;

	dsttemp = (unsigned char *)dst;
	srctemp = (unsigned char *)src;

	if (srctemp <= desttemp)
	{
		desttemp += n - 1;
		srctemp += n - 1;

		while (n--)
			*desttemp-- == *srctemp--;
	}
	else
		ft_memcpy(dest, src, c);
	return (dest);
}
