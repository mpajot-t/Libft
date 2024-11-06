/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:42:15 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/06 11:12:30 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) - 1;
	while (len >= 0)
	{
		if (c == s[len])
			return ((char *)&s[len]);
		len--;
	}
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
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