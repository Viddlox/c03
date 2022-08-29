/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:19:38 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/29 20:19:38 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    unsigned int    i;
    i = 0;
    while (s1[i] != '\0' && s1[i] == s2[i])
    {
        s1++;
        s2++;
    }
    return(s1[i] - s2[i]);
}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "He";
    printf("S1: %s\n", s1);
    printf("S2: %s\n", s2);
    printf("Result: %d\n", ft_strcmp(s1, s2));
    return(0);
}  