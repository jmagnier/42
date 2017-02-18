/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmagnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/18 14:37:09 by jmagnier          #+#    #+#             */
/*   Updated: 2017/02/18 16:32:29 by jmagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	ft_memalloc(size_t size)
{
	void *s;

	s = malloc(sizeof(size_t) * size);
	if (!s)
		return (NULL);
	ft_memset(*s, '\0', size);
	return (s);
}
