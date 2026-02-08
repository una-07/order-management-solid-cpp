#pragma once
#include <iostream>
#include "INotification.h"

class SmsNotification : public INotification {
public:
    void SendNotification(const std::string& message) override {
        std::cout << "SMS notification: " << message << std::endl;
    }
};
