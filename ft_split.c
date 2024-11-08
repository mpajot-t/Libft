/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpajot-t <mpajot-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 11:04:18 by mpajot-t          #+#    #+#             */
/*   Updated: 2024/11/08 10:13:22 by mpajot-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			words++;
		i++;
	}
	return (words + 1);
}

static void	fill(char *tab, char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
}

static int	set_malloc(char **tab, char const *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while (s[i])
	{
		count = 0;
		while (s[i + count] && s[i + count] != c)
			count++;
		if (count > 0)
		{
			tab[j] = malloc((count + 1) * sizeof(char));
			if (!tab[j])
				return (1);
			fill(tab[j], (s + i), c);
			j++;
			i = count + i;
		}
		else
			i++;
	}
	tab[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;

	i = 0;
	tab = malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	if (set_malloc(tab, s, c) == 1)
	{
		while (i < ft_wordcount(s, c))
		{
			free(tab[i]);
			i++;
		}
		free(tab);
		tab = NULL;
	}
	return (tab);
}
/*
#include <stdio.h>
int main()
{
	int i = 0;
	char a[] = "mem_tab_lelel_dde";
	char div = '_';
	char **tab = ft_split(a,div);
	while (tab[i])
	{
		printf("Retour : %s\n",tab[i]);
		i++;
	}
		
}
*/