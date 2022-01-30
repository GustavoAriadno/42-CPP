#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact {
	private:
		std::string _first_name, _last_name, _nickname, _phone_number, _darkest_secret;
	public:
		Contact();

		void		set_first_name(std::string inp);
		void		set_last_name(std::string inp);
		void		set_nickname(std::string inp);
		void		set_phone_number(std::string inp);
		void		set_darkest_secret(std::string inp);

		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_phone_number(void);
		std::string	get_darkest_secret(void);
};

#endif