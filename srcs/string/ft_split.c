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

/*
** The ft_split function splits a string into an array of substrings based on a
** delimiter character.
**
** Parameters:
** s - A pointer to the string to be split.
** c - The delimiter character used to split the string.
**
** Return:
** A dynamically allocated array of strings representing the split substrings.
** The last element of the array is set to NULL.
**
** Description:
** The ft_split function takes a pointer to a string (s) and a delimiter
** character (c). It starts by counting the number of words in the string by
** iterating through the characters and incrementing the word count every time
** a word is encountered. Then, it dynamically allocates memory for an array of
** strings (array) with a size equal to the word count plus one. Each element
** of the array will store a split substring, and the last element is set to
** NULL. Next, it splits the string into substrings by iterating through the
** characters again. It skips leading delimiter characters until it finds the
** start of a word. For each word, it calculates the length of the substring
** and dynamically allocates memory to store it. It then copies the word from
** the original string to the allocated memory using the copy_word function.
** Finally, it increments the word count and repeats the process until all
** words have been split and stored in the array. If any memory allocation
** fails during the process, the function returns NULL to indicate an error.
** The caller is responsible for freeing the allocated memory when it's no
** longer needed to prevent memory leaks.
**
** Note: The function assumes that the input string is null-terminated and
** does not contain any trailing delimiter characters.
**
** Example:
** const char *str = "Hello,World,Split,Me";
** char **split_array = ft_split(str, ',');
** (The string "Hello,World,Split,Me" is split into substrings using ',' as
** the delimiter)
** (The resulting split_array will contain the substrings ["Hello", "World",
** "Split", "Me", NULL])
** (The last element of the array is set to NULL to indicate the end of the
** array)
**
** const char *str = "Lorem ipsum dolor sit amet";
** char **split_array = ft_split(str, ' ');
** (The string "Lorem ipsum dolor sit amet" is split into substrings using ' '
** (space) as the delimiter)
** (The resulting split_array will contain the substrings ["Lorem", "ipsum",
** "dolor", "sit", "amet", NULL])
**
** const char *str = "apple,banana,cherry,orange";
** char **split_array = ft_split(str, ',');
** (The string "apple,banana,cherry,orange" is split into substrings using ','
** as the delimiter)
** (The resulting split_array will contain the substrings ["apple", "banana",
** "cherry", "orange", NULL])
**
** const char *str = "123-456-789-0";
** char **split_array = ft_split(str, '-');
** (The string "123-456-789-0" is split into substrings using '-' as the
** delimiter)
** (The resulting split_array will contain the substrings ["123", "456", "789",
** "0", NULL])
*/

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
