/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:34:39 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/15 16:25:48 by dvauthey         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
: nb(0)
{
}

int			PhoneBook::getNb()
{
	return (nb);
}

void		PhoneBook::setNb(int n_nb)
{
	nb = n_nb;
}

static int	not_number(std::string s, std::string message)
{
	size_t	i;

	i = 0;
	if (message.compare("number"))
		return (0);
	while (i < s.size())
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

static std::string	get_info(std::string message)
{
	std::string	temp;

	std::cout << "Enter the "<< message <<" : ";
	std::getline(std::cin, temp);
	if (std::cin.eof())
	{
		std::cout << "End of program." << std::endl;
		exit (2);
	}
	while (not_number(temp, message) || std::cin.fail() || temp.empty())
	{
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		std::cout << "This " << message << " is not valid, please try again : ";
		std::getline(std::cin, temp);
		if (std::cin.eof())
		{
			std::cout << "End of program." << std::endl;
			exit (3);
		}
	}
	return (temp);
}

void		PhoneBook::add(int i)
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
	if (nb < 8)
		nb++;
}

static std::string	verif_len(std::string s)
{
	if (s.size() > 10)
	{
		s.resize(9);
		s.append(1, '.');
	}
	return (s);
}

static void		get_index(Contact tab[], int nb)
{
	int 		index;
	std::string	temp;

	std::cout << "Enter an index : ";
	std::getline(std::cin, temp);
	if (cin_error(4))
		return ;
	if (temp.size() == 1)
		index = temp[0] - '0';
	if (temp.size() != 1 || index < 1 || index > nb)
		std::cout << "Error : this is not a valid index." << std::endl;
	else
	{
		std::cout << "First name : " << tab[index - 1].getF_name() << std::endl;
		std::cout << "Last name : " << tab[index - 1].getL_name() << std::endl;
		std::cout << "Nickname : " << tab[index - 1].getNickname() << std::endl;
		std::cout << "Phone number : " << tab[index - 1].getNumber() << std::endl;
		std::cout << "Darkest secret : " << tab[index - 1].getSecret() << std::endl;
	}
}

void		PhoneBook::search()
{
	int			i;
	std::string	temp;

	i = 0;
	if (nb == 0)
	{
		std::cout << "There is no contact saved." << std::endl;
		return ;
	}
	while (i < nb)
	{
		std::cout << std::setw(10) << i + 1 << " | ";
		temp = verif_len(tab[i].getF_name());
		std::cout << std::setw(10) << temp << " | ";
		temp = verif_len(tab[i].getL_name());
		std::cout << std::setw(10) << temp << " | ";
		temp = verif_len(tab[i].getNickname());
		std::cout << std::setw(10) << temp << std::endl;
		i++;
	}
	get_index(tab, nb);
}
