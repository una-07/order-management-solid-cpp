#pragma once
#include <iostream>
#include "INotification.h"

class EmailNotification : public INotification {
public:
    void SendNotification(const std::string& message) override {
        std::cout << "Email notification: " << message << std::endl;
    }
};

