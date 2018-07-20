#include "GsmPhone.hpp"
#include <iostream>

using namespace Phone;

void GsmPhone::makeCall(PhoneNumber no)
{
    std::cout << "GSM Calling: " << no << std::endl;
}

void GsmPhone::sendMessage(PhoneNumber no, std::string msg)
{
    std::cout << "GSM Message sent to: " << no << std::endl;
    std::cout << "GSM Message text: " << msg << std::endl;
}

