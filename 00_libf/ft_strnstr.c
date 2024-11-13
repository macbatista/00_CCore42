/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:19:09 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/13 11:53:49 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i = 0;
    size_t j;

    if (!*little)
        return (char *)big;

    while (big[i] && i < len)
    {
        j = 0;
        while (little[j] && big[i + j] && i + j < len && big[i + j] == little[j])
        {
            j++;
        }
        if (!little[j])
            return (char *)&big[i];
        i++;
    }

    return NULL;
}

int main(int c, char **v)
{
    (void)c;
    (void)v;

    char big[] = "Hello World";
    char little[] = "ll";
    size_t len = 10;

    char *result = strnstr(big, little, len);

    if (result != NULL)
        printf("%s\n", result);
    else
        printf("NULL\n");

    char *result2 = ft_strnstr(big, little, len);

    if (result2 != NULL)
        printf("%s\n", result2);
    else
        printf("NULL\n");
}
