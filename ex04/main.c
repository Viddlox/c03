/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:37:27 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/29 22:37:27 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    i = 0;
    j = 0;

    while ( str[i] != '\0')     //while i = 0 in array str != null, it will enter a while loop
    {                           //where string i + j must = to the strlen of findj in the string and as long as != '0'
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0') //if to_find finds a word in the string matching the tofind substring and reaches null
			return (str + i);   //it will +i which is the value of the index position within the total string length 
		i++;
		j = 0;
	}
	return (0);
}

int main(void)
{
    char    str[] = "It is 4/3/2001. Today is my birthday";
    char    tofind[] = "day";
    printf("String: %s\n", str);
    printf("Substring: %s\n", tofind);
    printf("ft_strstr: %s\n", ft_strstr(str, tofind));
}
