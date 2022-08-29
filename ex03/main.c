/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:15:33 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/29 21:15:33 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

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
        dest[i] = src[j];  //Will equate string array dest with src, and will continually i++ and j++ until nb which is 4 = 0. The index of i will be reverted to null
        i++;               //and the value of j for the src which is 4 will be used to concatenate as Michael'\0'_Che//
        j++;
        nb--;
    }
    dest[i] = '\0';
    return(dest);
}

int main(void)
{
    char    src[] = " Cheng";
    char    dest[100] = "Michael";
    printf("Result: %s", ft_strncat(dest, src, 4));
}