/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:33:10 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/05 15:14:11 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t src_len;
	size_t dst_len;
	
	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size < dst_len)
		return (dst_len+src_len);
	while (i < size - dst_len - 1 && src[i] != '\0')
	{
		dst[dst_len+i] = src[i];
		i++;
	}
	dst[dst_len+i] = '\0';
	return (dst_len+src_len);
}

#include <stdio.h>
int main()
{
	char a[20] = "hello";
	char b[] = "Bonjour";

	size_t taille = ft_strlcat(a, b, 10);
	printf("Resultat : %s\n", a);
	printf("Taille : %zu\n", taille);
}
