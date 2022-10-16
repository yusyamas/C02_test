/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:15:18 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/14 15:59:53 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FT_NULL '\0'

/* x = (0 ~ f) */
void	base16_print(unsigned int x)
{
	char	c;

	if (0 <= x && x <= 9)
	{
		c = '0' + x;
		write(1, &c, 1);
	}
	else
	{
		x -= 10;
		c = 'a' + x;
		write(1, &c, 1);
	}
}

void	ft_print_digit(unsigned long long n, int depth)
{
	unsigned long long	next_nbr;
	unsigned int		current_digit;

	if (depth == 16)
	{
		return ;
	}
	next_nbr = (unsigned long long)(n / 16);
	current_digit = (unsigned int)(n % 16);
	ft_print_digit(next_nbr, depth + 1);
	base16_print(current_digit);
	return ;
}

void	*char_to_base16_double(void *addr, unsigned int now, unsigned int size)
{
	unsigned int	i;
	char			*addres;

	i = 0;
	addres = addr;
	while (i < 16)
	{
		if (*(addres + now + i) == FT_NULL && now + i >= size)
		{
			write(1, "  ", 2);
		}
		else
		{
			base16_print((unsigned char)(*(addres + now + i) / 16));
			base16_print((unsigned char)(*(addres + now + i) % 16));
		}
		if (i % 2 == 1)
		{
			write(1, " ", 1);
		}
		i += 1;
	}
	return (addr);
}

void	*putchar_line(void *addr, unsigned int now, unsigned int size)
{
	unsigned int	i;
	char			*addres;

	i = 0;
	addres = addr;
	while (i <= 16)
	{
		if (i == 16 || now + i >= size)
		{
			write(1, "\n", 1);
			break ;
		}
		if (!(32 <= *(addres + now + i) && *(addres + now + i) <= 126))
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, addr + now + i, 1);
		}
		i += 1;
	}
	return (addr);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	unsigned long long	addres_number;

	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
		{
			addres_number = (unsigned long long)(addr + i);
			ft_print_digit(addres_number, 0);
			write(1, ": ", 2);
		}
		char_to_base16_double(addr, i, size);
		putchar_line(addr, i, size);
		i += 16;
	}
	return (addr);
}
