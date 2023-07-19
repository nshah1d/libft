/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:28:59 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 13:28:59 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isalpha function checks whether a given character is an alphabetic
** character.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is an alphabetic character, it returns 1024 (any non-zero
** value).
** If the character is not an alphabetic character, it returns 0.
**
** Description:
** The ft_isalpha function takes a character as input and determines whether it
** is an alphabetic character or not. An alphabetic character is defined as a
** letter from the English alphabet, either uppercase (A-Z) or lowercase (a-z).
** The function performs a comparison to check if the given character's ASCII
** value falls within the range of uppercase letters (65 to 90) or lowercase
** letters (97 to 122). If the character falls within either of these ranges,
** it returns a value of 1024 (which can be any non-zero value), indicating
** that the character is an alphabetic character. Otherwise, it returns 0,
** indicating that the character is not an alphabetic character.
**
** Example:
** ft_isalpha('A');
** returns 1024
** ft_isalpha('z');
** returns 1024
** ft_isalpha('0');
** returns 0 (not an alphabetic character)
** ft_isalpha('#');
** returns 0 (not an alphabetic character)
*/

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123))
		return (1024);
	return (0);
}
