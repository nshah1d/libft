/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 09:08:24 by nshahid           #+#    #+#             */
/*   Updated: 2023/07/01 09:08:24 by nshahid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_putnbr_fd function writes an integer to a specified file descriptor.
**
** Parameters:
** n - The integer to be written.
** fd - The file descriptor where the integer will be written.
**
** Return:
** None.
**
** Description:
** The ft_putnbr_fd function converts the integer into a string representation
** and writes it to the specified file descriptor using the write system call.
** It handles both positive and negative integers. The function first checks if
** the base is valid by calling the base_check function. If the base is valid,
** it recursively divides the number by the base length and writes the digits
** to the file descriptor. Negative numbers are handled by writing a minus sign
** before the absolute value of the number. The function assumes that the write
** operation will be successful and does not include explicit error handling.
**
** Note:
** It's important to ensure that the file descriptor is valid and open for
** writing before calling this function to avoid unexpected behavior or errors.
**
** Example:
** ft_putnbr_fd(12345, 1);
** The integer 12345 will be converted to a string and written to the standard
** output (STDOUT_FILENO).
**
** ft_putnbr_fd(-123, 2);
** The integer -123 will be converted to a string and written to the standard
** error (STDERR_FILENO).
**
** ft_putnbr_fd(0, 0);
** The integer 0 will be converted to a string and written to the standard
** input (STDIN_FILENO).
** (Note: The string will not be visible on the terminal since it is an input
** stream)
*/

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static int	base_check(char const *base)
{
	size_t		error;
	char const	*base_ptr;

	error = 0;
	if (!base || !*base)
		return (1);
	while (*base)
	{
		if (!(*base > 31 && *base < 127)
			|| *base == 32)
			error = 1;
		base_ptr = base - 1;
		while (*base_ptr)
		{
			if (*base_ptr == *base)
				error = 1;
			base_ptr--;
		}
		base++;
	}
	return (error);
}

static void	putnbr_base_fd(int nbr, const char *base, int fd)
{
	int				base_len;
	long long int	nb;
	char			c;

	if (base_check(base))
		return ;
	base_len = str_len(base);
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nb = -((long long int)nbr);
	}
	else
		nb = (long long int)nbr;
	if (nb < base_len)
	{
		c = *(base + nb);
		write(fd, &c, 1);
	}
	else
	{
		putnbr_base_fd(nb / base_len, base, fd);
		putnbr_base_fd(nb % base_len, base, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char const	*base;

	base = "0123456789";
	putnbr_base_fd(n, base, fd);
}
