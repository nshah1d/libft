/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:59:05 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 16:59:05 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isspace function checks whether a given character is a whitespace
** character.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is a whitespace character, it returns 8192 (any non-zero
** value).
** If the character is not a whitespace character, it returns 0.
**
** Description:
** The ft_isspace function takes a character as input and determines whether
** it is a whitespace character or not. Whitespace characters include space
* (' '), tab ('\t'), newline ('\n'), vertical tab ('\v'), form feed ('\f'),
** and carriage return ('\r'). The function performs a series of comparisons
** to check if the given character's ASCII value falls within the range of
** whitespace characters. If the character is within this range or is equal to
** a space character (ASCII value 32), it returns a value of 8192 (which can be
** any non-zero value), indicating that the character is a whitespace
** character. Otherwise, it returns 0, indicating that the character is not a
** whitespace character.
**
** Example:
** ft_isspace(' ');
** returns 8192
** ft_isspace('\t');
** returns 8192
** ft_isspace('A');
** returns 0 (not a whitespace character)
** ft_isspace('5');
** returns 0 (not a whitespace character)
*/

int	ft_isspace(int c)
{
	if ((c > 8 && c < 14)
		|| (c == 32))
		return (8192);
	return (0);
}
