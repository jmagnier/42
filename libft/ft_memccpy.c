/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 12:24:27 by jmagnier          #+#    #+#             */
/*   Updated: 2017/02/18 17:21:07 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *p_dst;
	size_t i;

	*p_dst = dst;
	i = 0;

	while (i < n)
	{
		*(p_dst + i) = *(src + i);
		if (*(src + i) = c)
				return (dst + i + 1);
		i++;
	}
	return (NULL);
}
	
