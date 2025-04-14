/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:54:57 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/14 11:35:31 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int			Contact::getIndex()
{
	return (index);
}

std::string	Contact::getF_name()
{
	return (f_name);
}

std::string	Contact::getL_name()
{
	return (l_name);
}

std::string	Contact::getNickname()
{
	return (nickname);
}

std::string	Contact::getNumber()
{
	return (number);
}

std::string	Contact::getSecret()
{
	return (secret);
}

void		Contact::setIndex(int n_index)
{
	index = n_index;
}
void		Contact::setF_name(std::string n_fname)
{
	f_name = n_fname;
}

void		Contact::setL_name(std::string n_lname)
{
	l_name = n_lname;
}

void		Contact::setNickname(std::string n_nickname)
{
	nickname = n_nickname;
}

void		Contact::setNumber(std::string n_number)
{
	number = n_number;
}

void		Contact::setSecret(std::string n_secret)
{
	secret = n_secret;
}