#pragma once
#include "IPhone.hpp"

namespace Phone
{
    using PhoneNumber = long;

    class LtePhone : public IPhone
    {
        public:
            LtePhone() {}
            virtual ~LtePhone() {}

            void makeCall(PhoneNumber no) override;
            void sendMessage(PhoneNumber no, std::string msg) override;
    };
};

