#include "WcdmaPhone.hpp"
#include <iostream>

using namespace Phone;

void WcdmaPhone::makeCall(PhoneNumber no)
{
    std::cout << "WCDMA Calling: " << no << std::endl;
}

void WcdmaPhone::sendMessage(PhoneNumber no, std::string msg)
{
    std::cout << "WCDMA Message sent to: " << no << std::endl;
    std::cout << "WCDMA Message text: " << msg << std::endl;
}

