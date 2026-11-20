#include "contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::setFirstName(std::string s) { _firstName = s; }
void Contact::setLastName(std::string s) { _lastName = s; }
void Contact::setNickname(std::string s) { _nickname = s; }
void Contact::setPhoneNumber(std::string s) { _phoneNumber = s; }
void Contact::setDarkestSecret(std::string s) { _darkestSecret = s; }

std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getLastName() const { return _lastName; }
std::string Contact::getNickname() const { return _nickname; }
std::string Contact::getPhoneNumber() const { return _phoneNumber; }
std::string Contact::getDarkestSecret() const { return _darkestSecret; }