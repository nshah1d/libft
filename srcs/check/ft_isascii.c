/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:43:12 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 15:43:12 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isascii function checks whether a given character is within the ASCII
** range.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is within the ASCII range (0 to 127), it returns 1 (non-
** zero value).
** If the character is outside the ASCII range, it returns 0.
**
** Description:
** The ft_isascii function takes a character as input and determines whether it
** is within the ASCII range or not. The ASCII range includes characters with
** ASCII values from 0 to 127. The function performs a comparison to check if
** the given character's ASCII value falls within this range. If the character
** falls within the ASCII range, it returns 1, indicating that the character is
** valid. Otherwise, it returns 0, indicating that the character is outside the
** ASCII range.
**
** Example:
** ft_isascii('A');
** returns 1
** ft_isascii('z');
** returns 1
** ft_isascii(150);
** returns 0 (outside the ASCII range)
** ft_isascii(-5);
** returns 0 (outside the ASCII range)
*/

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
		return (1);
	return (0);
}
