/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:00:58 by rhabib            #+#    #+#             */
/*   Updated: 2016/06/09 18:32:08 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*t_src;
	char	*t_dst;
	size_t	i;

	i = 0;
	t_dst = (char *)dst;
	t_src = (char *)src;
	if (src < dst)
	{
		while (++i <= len)
			t_dst[len - i] = t_src[len - i];
	}
	else
	{
		while (len-- > 0)
			*t_dst++ = *t_src++;
	}
	return (dst);
}
