/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/10 18:10:53 by jmagnier          #+#    #+#             */
/*   Updated: 2016/01/10 18:30:08 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *ptr_s1;
	unsigned char *ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;

	while (n--)
	{
		if (*ptr_s1 != *ptr_s2)
			return (*ptr_s1 < *ptr_s2 ? -1 : 1;);
		ptr_s1++;
		ptr_s2++;
	}
	return (0);
}
