/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:02:39 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/27 14:02:39 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_isdigit function checks whether a given character is a digit.
**
** Parameters:
** c - The character to be checked.
**
** Return:
** If the character is a digit, it returns 1.
** If the character is not a digit, it returns 0.
**
** Description:
** The ft_isdigit function takes a character as input and determines whether it
** is a digit or not. A digit is defined as a numeric character from 0 to 9.
** The function performs a comparison to check if the given character's ASCII
** value falls within the range of digits (48 to 57). If the character falls
** within this range, it returns 1, indicating that the character is a digit.
** Otherwise, it returns 0, indicating that the character is not a digit.
**
** Example:
** ft_isdigit('0');
** returns 1
** ft_isdigit('9');
** returns 1
** ft_isdigit('A');
** returns 0 (not a digit)
** ft_isdigit('#');
** returns 0 (not a digit)
*/

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
