/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:15:23 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/05 10:49:37 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
