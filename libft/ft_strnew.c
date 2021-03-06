/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pamicel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:55:27 by pamicel           #+#    #+#             */
/*   Updated: 2016/11/12 16:53:46 by pamicel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static void		*ft_memalloc(size_t size)
{
	char		*str;
	void		*ptr;

	ptr = malloc(size);
	if (ptr)
	{
		str = (char*)ptr;
		while (size-- && str)
			*(str++) = 0;
	}
	return (ptr);
}

char			*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}
