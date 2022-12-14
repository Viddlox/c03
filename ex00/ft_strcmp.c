/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < mcheng@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:48:31 by mcheng            #+#    #+#             */
/*   Updated: 2022/08/29 20:48:31 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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