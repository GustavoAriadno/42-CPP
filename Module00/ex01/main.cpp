#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string	fill_field(std::string to_fill) {
	std::string userInput;

	std::cout << "Please, type the " << to_fill << ": " << std::endl;

getInput:
	std::getline(std::cin, userInput);

	if (std::cin.eof()) return "";
	if (userInput.length() == 0) goto getInput;
	return userInput;
}

void		add_contact(PhoneBook &phone_book) {
	Contact		contact;
	std::string	buffer;

	buffer = fill_field("first name");
	if (buffer == "") return ;
	contact.set_first_name(buffer);

	buffer = fill_field("last name");
	if (buffer == "") return ;
	contact.set_last_name(buffer);

	buffer = fill_field("nickname");
	if (buffer == "") return ;
	contact.set_nickname(buffer);

	buffer = fill_field("phone number");
	if (buffer == "") return ;
	contact.set_phone_number(buffer);

	buffer = fill_field("darkest secret");
	if (buffer == "") return ;
	contact.set_darkest_secret(buffer);

	phone_book.set_contact(contact);
}

int			get_input(void)
{
	std::string	userInput = "";

	std::cout << "Type the following commands:" << std::endl;
	std::cout << "ADD: save a new contact" << std::endl;
	std::cout << "SEARCH: display a specific contact" << std::endl;
	std::cout << "EXIT: exit the program" << std::endl;

	std::cin >> userInput;
	if (userInput == "ADD") return 1;
	if (userInput == "SEARCH") return 2;
	if (userInput == "EXIT") return 0;
	if (userInput == "") return 0;
	return -1;
}

void		print(std::string str) {
	int	len;

	len = str.length();
	if (len > 10) {
		for (int i = 0; i < 9; i++) { std::cout << str[i]; }
		std::cout << ".";
	} else {
		len = 10 - len;
		while (len--) std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
}

int			get_index(int err=0) {
	std::string	userInput = "";

	if (err) std::cout << "Wrong input! Try again..." << std::endl;

	std::cout << "Type the index of the contact:";
	std::cin >> userInput;

	if (userInput == "") return -1;
	if (userInput.length() != 1 || userInput[0] < '0' || userInput[0] > '8') return get_index(1);
	return userInput[0] - '0';
}

void		search(PhoneBook &phone_book) {
	Contact		contact;
	int			index;

	contact = phone_book.get_one_contact(0);
	if (contact.get_first_name() == "") {
		std::cout << "There are no contacts" << std::endl
			<< "Please, use ADD command" << std::endl << std::endl;
		return ;
	}

	std::cout << "|     index|first name| last name| nick name|" << std::endl;

	for (int i = 0; i < 8; i++) {
		contact = phone_book.get_one_contact(i);

		if (contact.get_first_name() == "") break;

		std::cout << "|         " << i << "|";
		print(contact.get_first_name());
		print(contact.get_last_name());
		print(contact.get_nickname());
		std::cout << std::endl;
	}
	index = get_index();
	if (index == -1) return ;

	contact = phone_book.get_one_contact(index);
	if (contact.get_first_name() == "") {
		std::cout << "This contact doesn't exist" << std::endl << std::endl;
		return ;
	}

	std::cout << contact.get_first_name() << std::endl;
	std::cout << contact.get_last_name() << std::endl;
	std::cout << contact.get_nickname() << std::endl;
	std::cout << contact.get_phone_number() << std::endl;
	std::cout << contact.get_darkest_secret() << std::endl;
}

int			main(void)
{
	int			input;
	PhoneBook	phone_book;

	while ((input = get_input())) {
		if (input == 1) {
			add_contact(phone_book);
		} else if (input == 2) {
			search(phone_book);
		} else
			std::cout << "Wrong input! Try again >:(" << std::endl;
	}
	std::cout << "Exiting..." << std::endl;
	return 0;
}
