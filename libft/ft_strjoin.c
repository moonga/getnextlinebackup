/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 13:07:37 by rhabib            #+#    #+#             */
/*   Updated: 2016/06/09 18:35:14 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	len;
	size_t	i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	len = s1len + ft_strlen(s2);
	str = ft_strnew(len);
	i = 0;
	if (str)
	{
		while (i < s1len)
		{
			str[i] = s1[i];
			i++;
		}
		while (i < len)
		{
			str[i] = s2[i - s1len];
			i++;
		}
	}
	return (str);
}
