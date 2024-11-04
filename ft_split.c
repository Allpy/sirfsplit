/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alermi <alermi@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:24:53 by alermi            #+#    #+#             */
/*   Updated: 2024/10/30 13:25:42 by alermi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static	int	ft_word_count(char const *s, char c)
{
	int	word_count;
	int	i;

	i = 1;
	word_count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			word_count++;
		i++;
	}
	return (word_count);	
}
#include <stdio.h>
static void ft_word_selector(char const *s, char c,int word_count,char **dest)
{
	int	i;
	int	j;

	i = 0;
	printf("asd\n");
	while (word_count > 0)
	{
		j = i;
		while (s[i + j] != '\0' && s[j] != c)
		{
			printf("%c\n", s[j]);
			if  (s[i] == c)
				i++;
			if (s[j] != c)
				j++;
		}
		printf("\n");
		*dest = ft_substr(s, i, i + j);
		printf("%s\n", *dest);
		dest++;
		i += j;
		word_count--;
	}
	*dest = '\0';
}

char	**ft_split(char const *s, char c)
{
	unsigned int	word_count;
	char			**matris;

	word_count = ft_word_count(s, c);
	matris = (char **)malloc(word_count * (sizeof(char *)));
	if (!matris)
		return (NULL);
	ft_word_selector(s, c, word_count, matris);
	return (matris);
}

#include <stdio.h>

int main(void)
{
	char const *s = "alp eren lermi";
	char c = ' '; 
	printf ("%s",(char *)ft_split(s, c));
}
