/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:55:23 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/14 11:51:12 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Contact{
	private:
		int			index;
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;
	public:
		Contact();
		int			getIndex();
		std::string	getF_name();
		std::string	getL_name();
		std::string	getNickname();
		std::string	getNumber();
		std::string	getSecret();
		void		setIndex(int n_index);
		void		setF_name(std::string n_fname);
		void		setL_name(std::string n_lname);
		void		setNickname(std::string n_nickname);
		void		setNumber(std::string n_number);
		void		setSecret(std::string n_secret);
		
};