/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoumani <mmoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:25:41 by mmoumani          #+#    #+#             */
/*   Updated: 2023/10/27 21:23:47 by mmoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_CPP
# define CAT_CPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public :    
        Cat();
		Cat(Cat &other);
		Cat &operator = (const Cat &other);
		~Cat();

        void makeSound() const;
};

# endif