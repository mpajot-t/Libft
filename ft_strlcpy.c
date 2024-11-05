/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:29:24 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/05 14:44:19 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t src_len;
	
	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i+1] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "hello";
	char b[] = "Bonjour";
	ft_strlcpy(a,b,5);
	printf("Resultats = %s\n",a);
	printf("len = %zu",ft_strlcpy(a,b,5));
}
*/