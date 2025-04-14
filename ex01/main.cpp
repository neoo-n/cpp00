/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:02:49 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/14 16:30:21 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static void	not_valid(std::string s)
{
	std::cout << "\"" << s << "\" is not a valid command." << std::endl;
	std::cout << "Try these instead :" << std::endl;
	std::cout << "\"ADD\" : save a new contact." << std::endl;
	std::cout << "\"SEARCH\" : display a specific contact." << std::endl;
	std::cout << "\"EXIT\" : exit my Awesome PhoneBook." << std::endl;
}

int	main()
{
	int			nb_contact;
	std::string s;
	PhoneBook	my_pb;

	nb_contact = 0;
	std::cout << "My Awesome PhoneBook" << std::endl;
	while (1)
	{
		std::cout << "> ";
		std::cin >> s;
		if (s.compare("ADD") == 0)
			my_pb.add(nb_contact % 8);
		else if (s.compare("SEARCH") == 0)
			my_pb.search();
		else if (s.compare("EXIT") == 0)
			break ;
		else
		{
			std::cout << "here" << std::endl;
			not_valid(s);
			nb_contact--;
		}
		nb_contact++;
	}
	return (0);
}