/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:00:06 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/07 09:40:15 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ns;

	i = 0;
	ns = malloc(len * sizeof(char));
	if (!ns)
		return (NULL);
	while (i < len)
	{
		ns[i] = s[start];
		i++;
		start++;
	}
	return (ns);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "Hello world";
	char *b = ft_substr(a,4,7);
	printf("Retour : %s\n",b);
}
*/