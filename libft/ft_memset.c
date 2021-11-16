/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:36:03 by ael-beka          #+#    #+#             */
/*   Updated: 2021/11/16 02:41:38 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)b;
	i = 0;
	while (len > 0)
	{
		str[i] = (unsigned char)c;
		i++;
		len--;
	}
	return (b);
}
/*
void	ft_print_arr(char *arr, int size)
{
	int	i;
	i = 0;
	while (arr[i] && i < size)
	{
		printf("%c\n",arr[i]);
		i++;
	}
}
int	main()
{
	char	s[10] =  "Hello 1337";
	
	ft_print_arr(s, 10);
	printf("\n");
	ft_memset(s,'*',3);
	ft_print_arr(s,10);
	return(0);
}
*/