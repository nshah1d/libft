/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:31:07 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 15:31:07 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isalnum function checks whether a given character is an alphabetic
** character or a digit.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is an alphabetic character or a digit, it returns 8 (non-
** zero value).
** If the character is neither an alphabetic character nor a digit, it returns
** 0.
**
** Description:
** The ft_isalnum function takes a character as input and determines whether it
** is an alphabetic character or a digit. An alphabetic character is defined as
** a letter from the English alphabet, either uppercase (A-Z) or lowercase
** (a-z). A digit is defined as a numeric character from 0 to 9. The function
** performs a series of comparisons to check if the given character's ASCII
** value falls within the range of uppercase letters (65 to 90), lowercase
** letters (97 to 122), or digits (48 to 57). If the character falls within any
** of these ranges, it returns 8, indicating that the character is either an
** alphabetic character or a digit. Otherwise, it returns 0, indicating that
** the character is neither an alphabetic character nor a digit.
**
** Example:
** ft_isalnum('A');
** returns 8
** ft_isalnum('z');
** returns 8
** ft_isalnum('0');
** returns 8
** ft_isalnum('#');
** returns 0 (not an alphabetic character or a digit)
*/

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123)
		|| (c > 47 && c < 58))
		return (8);
	return (0);
}
