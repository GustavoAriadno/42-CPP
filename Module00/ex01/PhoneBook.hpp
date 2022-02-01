#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	private:
		int		_index;
		Contact	_contactList[8];
	public:
		PhoneBook();

		void		set_contact(Contact &newContact);

		Contact		get_one_contact(int wichContact);
		Contact*	get_all_contacts(void);
		int			get_index(void);
};

#endif