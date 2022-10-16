/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusyamas <yuppiy2000@icloud.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:56:21 by yusyamas          #+#    #+#             */
/*   Updated: 2022/10/13 17:16:54 by yusyamas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*https://opensource.apple.com/source/xnu/
xnu-4570.1.46/osfmk/arm/strlcpy.c.auto.html*/
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

char	*ft_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i += 1;
	}
	dest[i] = FT_NULL;
	return (dest);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < size)
	{
		ft_memcpy(dest, src, srclen + 1);
	}
	else if (size != 0)
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = FT_NULL;
	}
	return (srclen);
}
