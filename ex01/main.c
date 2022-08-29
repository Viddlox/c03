/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:50:49 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/29 20:50:49 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int    i;
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && n > 0 && s1[i] == s2[i])
    {
        s1++;
        s2++;
        n--;
    }
    return (s1[i] - s2[i]);
}

int main(void)
{
    char    s1[] = "GAY";
    char    s2[] = "ABCDEFG";
    printf("S1: %s\n", s1);
    printf("S2: %s\n", s2);
    printf("Difference: %d\n", ft_strncmp(s1, s2, 3));
}