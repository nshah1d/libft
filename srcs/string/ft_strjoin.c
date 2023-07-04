/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:08:15 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/30 01:08:15 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_strjoin function concatenates two strings into a new string.
**
** Parameters:
** s1 - A pointer to the first string.
** s2 - A pointer to the second string.
**
** Return:
** If memory allocation is successful, a pointer to the concatenated string is
** returned.
** If s1 or s2 is NULL or if memory allocation fails, NULL is returned.
**
** Description:
** The ft_strjoin function takes two parameters: s1 and s2. It first checks if
** either s1 or s2 is NULL. If true, it means one of the strings is missing,
** and the function returns NULL to indicate an error. Next, it calls the
** str_new function to allocate memory for the concatenated string. The str_new
** function is defined as static in the code and is responsible for allocating
** memory. If memory allocation fails, str_new returns NULL, and ft_strjoin
** also returns NULL to indicate an error. If memory allocation is successful,
** ft_strjoin assigns the returned pointer to the str variable and increments
** the str_ptr variable to keep track of the beginning of the concatenated
** string. It then enters a loop that copies characters from s1 to the new
** string until a null terminator is encountered in s1. Inside the loop, it
** assigns the value of the current character in s1 to the memory location
** pointed to by str and increments both pointers to move to the next
** character. The loop continues until the end of s1. After copying s1,
** ft_strjoin enters another loop to copy characters from s2 to the new string.
** It performs the same character copying process as in the previous loop. Once
** the end of s2 is reached, it adds a null terminator at the end of the
** concatenated string to ensure proper termination. Finally, ft_strjoin
** returns the str_ptr pointer, which points to the beginning of the
** concatenated string. The function is useful when you need to combine two
** strings into a new string.
**
** Example:
** char str1[] = "Hello, ";
** char str2[] = "World!";
** char *result = ft_strjoin(str1, str2);
** (The function concatenates "Hello, " and "World!" into a new string "Hello,
** World!")
**
** char *missing_string = ft_strjoin(NULL, str2);
** (The function returns NULL as one of the strings is missing)
*/

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*str_ptr;

	if (!s1 || !s2)
		return (NULL);
	str = str_new(str_len(s1) + str_len(s2));
	if (!str)
		return (NULL);
	str_ptr = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str_ptr);
}
