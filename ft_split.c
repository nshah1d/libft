/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 21:38:27 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/30 21:38:27 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			word_count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (word_count);
}

static char	*copy_word(char *dest, const char *src, int n)
{
	char		*dest_ptr;
	const char	*src_ptr;

	dest_ptr = dest;
	src_ptr = src;
	while (n--)
		*dest_ptr++ = *src_ptr++;
	*dest_ptr = '\0';
	return (dest);
}

static void	split_string(char **array, const char *s, char c, int count)
{
	int			word;
	int			len;
	const char	*word_start;

	word = 0;
	while (word < count)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		word_start = s;
		while (*s && *s != c)
		{
			len++;
			s++;
		}
		*(array + word) = (char *)malloc(sizeof(char) * (len + 1));
		if (!*(array + word))
			return ;
		copy_word(*(array + word), word_start, len);
		word++;
	}
	*(array + word) = NULL;
}

char	**ft_split(const char *s, char c)
{
	int		count;
	char	**array;

	if (!s)
		return (NULL);
	count = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (count + 1));
	if (!array)
		return (NULL);
	split_string(array, s, c, count);
	return (array);
}
