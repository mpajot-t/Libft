/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:39:55 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/08 10:14:28 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int a)
{
	int	i;

	i = 0;
	if (a < 0)
	{
		a = -a;
		i++;
	}
	if (a == 0)
		return (1);
	while (a > 0)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		nblen;
	int		isnegative;
	char	*str;

	if (n == -2147483648)
		return ("-2147483648");
	nblen = ft_intlen(n);
	isnegative = 0;
	str = malloc((nblen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
		isnegative = 1;
	}
	str[nblen] = '\0';
	while (nblen > isnegative)
	{
		str[nblen - 1] = (n % 10) + '0';
		n = n / 10;
		nblen--;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	int a = -24558;
	char *b = ft_itoa(a);
	printf("Retour : %s\n",b);
}
*/