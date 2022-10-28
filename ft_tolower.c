/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:14:48 by vvagapov          #+#    #+#             */
/*   Updated: 2022/10/27 23:16:29 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
	unsigned char res;

	res = (unsigned char)c;
	if (res >= 'A' && res <= 'Z')
		return (c + 'a' - 'A');
	else
		return c;
}

void test(int c)
{
	printf("%d or %u or %c : should be: %d or %u or %c, mine: %d or %u or %c\n",
			c, c, c,
			tolower(c), tolower(c), tolower(c),
			ft_tolower(c), ft_tolower(c), ft_tolower(c));
}

int main(void)
{
	test('d');
	test(120);
	test(240);
	test('F');
	test(0);
	test(-10);
	test('H');
	test(100);
	unsigned char uc = '\200';
	test(uc);
	return 0;
}
