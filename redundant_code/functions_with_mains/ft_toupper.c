/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvagapov <vvagapov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:54:06 by vvagapov          #+#    #+#             */
/*   Updated: 2022/11/12 17:38:57 by vvagapov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	unsigned char	res;

	res = (unsigned char)c;
	if (res >= 'a' && res <= 'z')
		return (c + 'A' - 'a');
	else
		return (c);
}
/* 
void	test(int c)
{
	printf("%d or %u or %c : should be: %d or %u or %c, mine: %d or %u or %c\n",
			c, c, c,
			toupper(c), toupper(c), toupper(c),
			ft_toupper(c), ft_toupper(c), ft_toupper(c));
}

int	main(void)
{
	unsigned char	uc;

	test('d');
	test(120);
	test(240);
	test('F');
	test(0);
	test(-10);
	uc = '\200';
	test(uc);
	return (0);
}
 */