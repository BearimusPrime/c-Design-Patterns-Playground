#pragma once
#include "IPhone.hpp"

namespace Phone
{
    using PhoneNumber = long;

    class GsmPhone : public IPhone
    {
        public:
            GsmPhone() {}
            virtual ~GsmPhone() {}

            void makeCall(PhoneNumber no) override;
            void sendMessage(PhoneNumber no, std::string msg) override;
    };
};

