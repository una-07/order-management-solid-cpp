#pragma once
#include <string>

class INotification {
public:
    virtual void SendNotification(const std::string& message) = 0;
    virtual ~INotification() = default;
};
