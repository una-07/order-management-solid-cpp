#pragma once

class IPayment {
public:
    virtual void ProcessPayment(double amount) = 0;
    virtual ~IPayment() = default;
};
