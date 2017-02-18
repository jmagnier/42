/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 19:52:49 by jmagnier          #+#    #+#             */
/*   Updated: 2017/02/18 20:13:35 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *p_s;

	*p_s = s;
	
	while (n--)
	{
		if (*p_s == c)
			return (void *) p_s;
		p_s++;
	}
	return (NULL);
}

