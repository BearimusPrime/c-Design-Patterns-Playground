#include <iostream>
#include <memory>
#include "IPhone.hpp"
#include "GsmPhone.hpp"
#include "WcdmaPhone.hpp"
#include "LtePhone.hpp"

const Phone::PhoneNumber PHONE_NO = 123456789;

int main()
{
    int phoneType = -1;
    std::cout << "What phone? 1: GSM, 2: WCDMA, 3: LTE" << std::endl;
    std::cin >> phoneType;
    std::unique_ptr<Phone::IPhone> phone;
    switch (phoneType) {
        case 1: phone.reset(new Phone::GsmPhone());
                break;
        case 2: phone.reset(new Phone::WcdmaPhone());
                break;
        case 3: phone.reset(new Phone::LtePhone());
                break;
        default:
                std::cerr << "Unknown phone type!" << std::endl;
                return 1;
    }
    phone->makeCall(PHONE_NO);
    phone->sendMessage(PHONE_NO, "Hello there!");
    return 0;
}
