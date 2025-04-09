/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 13:44:16 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/09 23:04:11 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>

std::string	upper(std::string s)
{
	size_t	i;

	i = 0;
	while (i < s.size())
	{
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}

int main(int ac, char **av)
{
	int			i;
	std::string	s;

	i = 1;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	while (i < ac)
	{
		s = av[i];
		s = upper(s);
		std::cout << s;
		if (i == ac - 1)
			std::cout << std::endl;
		i++;
	}
	return (0);
}