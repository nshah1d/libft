/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 21:51:36 by nshahid           #+#    #+#             */
/*   Updated: 2023/06/29 21:51:36 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_atoi function converts a string representation of an integer to
** its corresponding integer value.
**
** Parameters:
** str - A pointer to the input string.
**
** Return:
** The integer value obtained from the input string.
**
** Description:
** The ft_atoi function scans the input string and converts it to an
** integer. It skips any leading whitespace characters by advancing the
** pointer. If a plus (+) or minus (-) sign is encountered, it determines
** the sign of the number and advances the pointer. Then, it processes
** each digit character and calculates the corresponding integer value.
** It performs checks to prevent overflow by comparing the current value
** with the previous value multiplied by the sign. If an overflow occurs,
** it returns 0 if the sign is positive or -1 if the sign is negative.
** Finally, it returns the resulting integer value.
**
** Example:
** ft_atoi("12345");
** returns 12345
**
** ft_atoi("-456");
** returns -456
**
** ft_atoi("2147483647");
** returns 2147483647 (maximum value of int)
**
** ft_atoi("99999999999999999999");
** returns -1 (exceeds 20 digits with positive sign)
*/

static int	check_space(int c)
{
	if ((c > 8 && c < 14)
		|| (c == 32))
		return (8192);
	return (0);
}

static int	check_digit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_atoi(char const *str)
{
	long long int	n;
	long long int	check;
	int				sign;

	n = 0;
	sign = 1;
	while (*str && check_space(*str))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign *= -1;
		str++;
	}
	while (*str && check_digit(*str))
	{
		check = n;
		n = n * 10 + sign * (*str - 48);
		if (n > check && sign < 0)
			return (0);
		if (n < check && sign > 0)
			return (-1);
		str++;
	}
	return (n);
}
