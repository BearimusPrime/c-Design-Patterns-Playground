#pragma once
#include <string>

namespace Phone
{
    using PhoneNumber = long;

    class IPhone
    {
        public:
            IPhone() {}
            virtual ~IPhone() {}

            virtual void makeCall(PhoneNumber no) = 0;
            virtual void sendMessage(PhoneNumber no, std::string msg) = 0;
    };
};

