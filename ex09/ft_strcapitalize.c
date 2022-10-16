/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:39:05 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/14 14:46:47 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define FT_NULL '\0'

int	bool_word(char *c)
{
	if ('a' <= *c && *c <= 'z')
	{
		return (1);
	}
	if ('A' <= *c && *c <= 'Z')
	{
		return (1);
	}
	if ('0' <= *c && *c <= '9')
	{
		return (1);
	}
	return (0);
}

int	bool_lowercase(char *c)
{
	if ('a' <= *c && *c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	bool_uppercase(char *c)
{
	if ('A' <= *c && *c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_str_alphabet_change(char *str, int *is_word_first)
{
	if (*is_word_first)
	{
		if (bool_lowercase(str))
		{
			*str -= 32;
		}
	}
	else
	{
		if (bool_uppercase(str))
		{
			*str += 32;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*c;
	int		is_word_first;

	is_word_first = 1;
	c = str;
	while (*c != FT_NULL)
	{
		if (bool_word(c))
		{
			ft_str_alphabet_change(c, &is_word_first);
			is_word_first = 0;
		}
		else
		{
			is_word_first = 1;
		}
		c += 1;
	}
	return (str);
}
