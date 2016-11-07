/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 10:10:24 by rhabib            #+#    #+#             */
/*   Updated: 2016/10/10 18:36:09 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char			*ft_strnew(size_t size)
{
	void		*str;

	str = (void *)ft_memalloc(size + 1);
	if (str == NULL)
		return ((char *)NULL);
	else
		return ((char *)str);
}
