#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_index = 0;
}

void		PhoneBook::set_contact(Contact &newContact) {
	if (this->_index >= 8) this->_index = 0;
	this->_contactList[this->_index++] = newContact;
}

Contact		PhoneBook::get_one_contact(int wichContact) { return this->_contactList[wichContact]; }
Contact*	PhoneBook::get_all_contacts(void) { return this->_contactList; }
