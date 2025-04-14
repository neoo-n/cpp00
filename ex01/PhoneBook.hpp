/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvauthey <dvauthey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:43:30 by dvauthey          #+#    #+#             */
/*   Updated: 2025/04/14 16:25:06 by dvauthey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

class PhoneBook{
	private:
		Contact	tab[8];
		int		nb;
	public:
		PhoneBook();
		int		getNb();
		void	setNb(int n_nb);
		void	add(int i);
		void	search();
};
