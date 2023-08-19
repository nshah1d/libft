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
** NULL if memory allocation fails or if 's' is NULL.
**
** Description:
** The ft_split function takes a pointer to the input string 's' and a
** character 'c' which acts as a delimiter. It calculates the number of
** substrings present in the string by calling the count_words function. It
** then allocates memory for an array of string pointers to store the
** substrings, including an extra NULL pointer at the end.
**
** The split function is responsible for populating the array with substrings.
** It initializes two indices 'i' and 'j' to keep track of positions in the
** string. It iterates through the string while 'i' is less than the number of
** words. It skips the delimiter characters and extracts a substring using the
** ft_substr function. If memory allocation for the substring fails, the
** previously allocated memory is freed using the free_array function, and the
** function returns NULL. Once all substrings are extracted and stored in the
** array, a NULL pointer is placed at the end of the array to indicate the end
** of substrings.
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

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(array + i) = ft_substr(s, j, get_word_len(&*(s + j), c));
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, words);
	return (array);
}
