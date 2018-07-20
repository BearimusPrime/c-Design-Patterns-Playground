#include "LtePhone.hpp"
#include <iostream>

using namespace Phone;

void LtePhone::makeCall(PhoneNumber no)
{
    std::cout << "LTE Calling: " << no << std::endl;
}

void LtePhone::sendMessage(PhoneNumber no, std::string msg)
{
    std::cout << "LTE Message sent to: " << no << std::endl;
    std::cout << "LTE Message text: " << msg << std::endl;
}

