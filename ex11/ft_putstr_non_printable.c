/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:20:31 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/14 15:48:16 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define FT_NULL '\0'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	bool_printable(char *c)
{
	if (32 <= *c && *c <= 126)
	{
		return (1);
	}
	return (0);
}

int	bool_numeric(int c)
{
	if (0 <= c && c <= 9)
	{
		return (1);
	}
	return (0);
}

void	base16_print(int x)
{
	if (bool_numeric(x))
	{
		ft_putchar((char)('0' + x));
	}
	else
	{
		x -= 10;
		ft_putchar((char)('a' + x));
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	*c;

	c = str;
	while (*c != FT_NULL)
	{
		if (bool_printable(c))
		{
			ft_putchar(*c);
		}
		else
		{
			ft_putchar('\\');
			base16_print((unsigned char)*c / 16);
			base16_print((unsigned char)*c % 16);
		}
		c += 1;
	}
}
