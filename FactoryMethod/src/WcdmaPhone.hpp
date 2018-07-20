#pragma once
#include "IPhone.hpp"

namespace Phone
{
    using PhoneNumber = long;

    class WcdmaPhone : public IPhone
    {
        public:
            WcdmaPhone() {}
            virtual ~WcdmaPhone() {}

            void makeCall(PhoneNumber no) override;
            void sendMessage(PhoneNumber no, std::string msg) override;
    };
};

