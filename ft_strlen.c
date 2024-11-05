/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:17:35 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/05 14:12:45 by mpajot-t         ###   ########.fr       */
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
