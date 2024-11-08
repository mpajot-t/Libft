/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:35:23 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/08 14:50:56 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	unsigned char *ns;
	unsigned char nc;
	ns = (unsigned char *)s;
	nc = (unsigned char)c;
	while (ns[i] || c == '\0')
	{
		if (nc == ns[i])
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char a[] = "helllo";
	int b = 111;
	printf("Retour : %s\n", ft_strchr(a,b));
}
*/