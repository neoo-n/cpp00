/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:43:30 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/14 11:41:53 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

class PhoneBook{
	private:
		Contact	tab;
	public:
		void	add();
		void	search();
		void	exit();
}
