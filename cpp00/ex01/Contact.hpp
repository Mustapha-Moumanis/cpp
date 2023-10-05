#include <iostream>

# ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact 
{
	private :
		int				index;
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;

	public :

		Contact();
		~Contact();

		void setContact(int id, std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
		void getContact(void);
		void valableContact(void);

};

#endif