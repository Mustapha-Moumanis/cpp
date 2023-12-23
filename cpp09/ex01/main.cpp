/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 18:57:12 by mmoumani          #+#    #+#             */
/*   Updated: 2023/12/20 18:44:28 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	try {
		if(ac != 2)
			throw std::runtime_error("Error");
		RPN rpn(av[1]);
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}
