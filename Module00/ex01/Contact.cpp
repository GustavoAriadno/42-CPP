#include "Contact.hpp"

Contact::Contact() {
	_nickname = "";
	_last_name = "";
	_first_name = "";
	_phone_number = "";
	_darkest_secret = "";
}

void		Contact::set_nickname(std::string inp) { this->_nickname = inp; }
void		Contact::set_last_name(std::string inp) { this->_last_name = inp; }
void		Contact::set_first_name(std::string inp) { this->_first_name = inp; }
void		Contact::set_phone_number(std::string inp) { this->_phone_number = inp; }
void		Contact::set_darkest_secret(std::string inp) { this->_darkest_secret = inp; }

std::string	Contact::get_nickname(void) { return this->_nickname; }
std::string	Contact::get_last_name(void) { return this->_last_name; }
std::string	Contact::get_first_name(void) { return this->_first_name; }
std::string	Contact::get_phone_number(void) { return this->_phone_number; }
std::string	Contact::get_darkest_secret(void) { return this->_darkest_secret; }
