/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:56:24 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 12:56:24 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isprint function checks whether a given character is printable.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is printable, it returns 16384 (any non-zero value).
** If the character is not printable, it returns 0.
**
** Description:
** The ft_isprint function takes a character as input and determines whether
** it is a printable character or not. A character is considered printable
** if its ASCII value is greater than 31 (decimal) and less than 127 (decimal).
** Characters in this range correspond to printable characters in the ASCII
** table, including alphabets (A-Z, a-z), digits (0-9), punctuation marks, and
** special symbols. The function performs a simple comparison to check if the
** given character's ASCII value falls within the specified range. If it does,
** it returns a value of 16384 (which can be any non-zero value), indicating
** that the character is printable. Otherwise, it returns 0, indicating that
** the character is not printable.
**
** Example:
** ft_isprint('A');
** returns 16384
** ft_isprint('#');
** returns 16384
** ft_isprint('\t');
** returns 0 (tab character)
** ft_isprint('\n');
** returns 0 (newline character)
** ft_isprint(' ');
** returns 16384 (space character)
*/

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (16384);
	return (0);
}
