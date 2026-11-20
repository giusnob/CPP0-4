#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : _count(0), _next(0) {}
PhoneBook::~PhoneBook() {}

// helper: richiede un campo e non accetta stringa vuota
static std::string promptField(std::string label)
{
	std::string input;
	while (true)
	{
		std::cout << label << ": ";
		if (!std::getline(std::cin, input))  // EOF (Ctrl+D)
			return ("");
		if (!input.empty())
			return (input);
		std::cout << "Il campo non puo' essere vuoto." << std::endl;
	}
}

void PhoneBook::addContact()
{
	Contact c;
	c.setFirstName(promptField("First name"));
	c.setLastName(promptField("Last name"));
	c.setNickname(promptField("Nickname"));
	c.setPhoneNumber(promptField("Phone number"));
	c.setDarkestSecret(promptField("Darkest secret"));

	_contacts[_next] = c;
	_next = (_next + 1) % 8;
	if (_count < 8)
		_count++;
}

// tronca a 10 caratteri con un punto finale
static std::string truncate(std::string s)
{
	if (s.length() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

void PhoneBook::searchContact() const
{
	if (_count == 0)
	{
		std::cout << "Rubrica vuota." << std::endl;
		return;
	}

	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < _count; i++)
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << truncate(_contacts[i].getFirstName()) << "|"
				  << std::setw(10) << truncate(_contacts[i].getLastName()) << "|"
				  << std::setw(10) << truncate(_contacts[i].getNickname()) << "|"
				  << std::endl;

	std::string line;
	std::cout << "Enter the index: ";
	if (!std::getline(std::cin, line))
		return;
	if (line.length() != 1 || !std::isdigit(line[0]))
	{
		std::cout << "Indice non valido." << std::endl;
		return;
	}
	int idx = line[0] - '0';
	if (idx < 0 || idx >= _count)
	{
		std::cout << "Nessun contatto a quell'indice." << std::endl;
		return;
	}

	std::cout << "First name    : " << _contacts[idx].getFirstName() << std::endl;
	std::cout << "Last name     : " << _contacts[idx].getLastName() << std::endl;
	std::cout << "Nickname      : " << _contacts[idx].getNickname() << std::endl;
	std::cout << "Phone number  : " << _contacts[idx].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[idx].getDarkestSecret() << std::endl;
}