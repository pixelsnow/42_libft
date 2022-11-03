/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:18:20 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/03 23:04:01 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static size_t ft_strlen(const char *s)
{
	size_t res;
	
	res = 0;
	while (s[res])
		res++;
	return res;
}

static size_t min(size_t a, size_t b)
{
    if (a < b) return (a);
    else return (b);
}

// What shall we do if s is NULL?
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  s_len;
    size_t  res_len;
    char    *res;
    
    s_len = ft_strlen(s);
    printf("s length is %lu\n", s_len);
    if (s_len < start)
        res_len = 0;
    else
        res_len = min(len, s_len - start);
    printf("res length is %lu\n", res_len);
    if (res_len < 0) res_len = 0;
    res = malloc(sizeof(char) * res_len + 1);
    if (!res) return NULL;
    res[res_len] = '\0';
    while (res_len)
    {
        res_len--;
        res[res_len] = s[start + res_len];
    }
    return res;
}

void test(char const *s, unsigned int start, size_t len)
{
    printf("\t'%s' from %u for %lu: '%s'\n",
        s, start, len, ft_substr(s, start, len));
}

int main(void)
{
    test("hello", 3, 10);
    test("hello", 3, 0);
    test("", 0, 0);
    test("", 3, 15);
    test("a", 3, 15);
    test("", 0, 15);
    test("", 15, 0);
    test("hellllllllo", 5, 7);
    test("hellllllllo", 20, 7);
    test("hellllllllo", 2, 0);
    return (0);
}