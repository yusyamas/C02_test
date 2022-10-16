/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:28:00 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/13 23:14:28 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_NULL '\0'

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str != FT_NULL)
	{
		length += 1;
		str += 1;
	}
	return (length);
}

char	*ft_memcpy(char *dest, char *src, unsigned int len)
{
	char	*c;

	c = dest;
	while (len > 0)
	{
		*dest = *src;
		dest += 1;
		src += 1;
		len -= 1;
	}
	return (c);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	length;

	length = ft_strlen(src);
	ft_memcpy(dest, src, length + 1);
	return (dest);
}
