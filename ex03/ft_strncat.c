/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:27:58 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/29 22:27:58 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0' && nb > 0)
    {
        i++;
    }
    j = 0;
    while (src[j] != '\0' && nb > 0)
    {
        dest[i] = src[j];
        i++;
        j++;
        nb--;
    }
    dest[i] = '\0';
    return(dest);
}