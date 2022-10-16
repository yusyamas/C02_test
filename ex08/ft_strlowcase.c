/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:29:19 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/14 14:45:35 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

int	bool_uppercase(char *c)
{
	if ('A' <= *c && *c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*c;

	c = str;
	while (*c != FT_NULL)
	{
		if (bool_uppercase(c))
		{
			*c += 32;
		}
		c += 1;
	}
	return (str);
}
