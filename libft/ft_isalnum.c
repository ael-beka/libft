/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-beka <ael-beka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:47:07 by ael-beka          #+#    #+#             */
/*   Updated: 2021/11/11 19:00:47 by ael-beka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c= 'A' && c <= 'Z'))
        return (1);
    else if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
