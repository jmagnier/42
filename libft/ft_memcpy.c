/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 12:24:37 by jmagnier          #+#    #+#             */
/*   Updated: 2017/02/18 17:21:29 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *p_dst;
	const char *p_src;

	*p_dst = dst;
	*p_src = src;
 
	while (n--)
	{	
		*p_dst++ = *p_src++;	
	}

	return (dst);
}
