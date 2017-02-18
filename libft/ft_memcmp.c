/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 17:31:30 by jmagnier          #+#    #+#             */
/*   Updated: 2017/02/18 19:44:41 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *) s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2) 
		}
		s1++;
		s2++;
	}
	return (0);
}
