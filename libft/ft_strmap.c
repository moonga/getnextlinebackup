/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 12:07:24 by rhabib            #+#    #+#             */
/*   Updated: 2016/06/09 14:01:39 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	length;
	size_t	i;
	char	*str;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	str = ft_strnew(length);
	i = 0;
	if (str)
	{
		while (i < length)
		{
			str[i] = (*f)(s[i]);
			i++;
		}
	}
	return (str);
}
