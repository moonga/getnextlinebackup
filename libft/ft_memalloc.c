/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhabib <rhabib@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 10:03:27 by rhabib            #+#    #+#             */
/*   Updated: 2016/10/10 18:36:36 by rhabib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*tab;
	char	*init;

	i = 0;
	tab = (void*)malloc(sizeof(char) * size);
	init = (char*)tab;
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		init[i] = 0;
		i++;
	}
	return (tab);
}
