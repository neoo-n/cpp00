/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:34:39 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/14 16:40:29 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
: nb(0)
{
}

int		PhoneBook::getNb()
{
	return (nb);
}

void	PhoneBook::setNb(int n_nb)
{
	nb = n_nb;
}

std::string	get_info(std::string message)
{
	std::string	temp;

	std::cout << "Enter the "<< message <<" : ";
	std::cin >> temp;
	while (temp.empty())
	{
		std::cout << "This " << message << " is empty, please try again : ";
		std::cin >> temp;
	}
	return (temp);
}

void	PhoneBook::add(int i)
{
	std::string	temp;

	temp = get_info("first name");
	tab[i].setF_name(temp);
	temp = get_info("last name");
	tab[i].setL_name(temp);
	temp = get_info("nickname");
	tab[i].setNickname(temp);
	temp = get_info("number");
	tab[i].setNumber(temp);
	temp = get_info("darkest secret");
	tab[i].setSecret(temp);
	nb = i + 1;
}

std::string	verif_len(std::string s)
{
	if (s.size() > 10)
	{
		s.resize(9);
		s.append(1, '.');
	}
	return (s);
}

void	PhoneBook::search()
{
	int			i;
	int			index;
	std::string	temp;

	i = 0;
	index = 0;
	if (nb == 0)
		return ;
	while (i < nb)
	{
		std::cout << i + 1 << " | ";
		temp = verif_len(tab[i].getF_name());
		std::cout << temp << " | ";
		temp = verif_len(tab[i].getL_name());
		std::cout << temp << " | ";
		temp = verif_len(tab[i].getNickname());
		std::cout << temp << std::endl;
		i++;
	}
	std::cout << "Enter an index : ";
	std::cin >> index;
	if (index < 1 || index > nb)
		std::cout << "Error : this is not a valid index" << std::endl;
	else
	{
		std::cout << "First name : " << tab[index - 1].getF_name() << std::endl;
		std::cout << "Last name : " << tab[index - 1].getL_name() << std::endl;
		std::cout << "Nickname : " << tab[index - 1].getNickname() << std::endl;
		std::cout << "Phone number : " << tab[index - 1].getNumber() << std::endl;
		std::cout << "Darkest secret : " << tab[index - 1].getSecret() << std::endl;
	}
}
