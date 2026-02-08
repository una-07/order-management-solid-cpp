#pragma once
#include <iostream>
#include "IPayment.h"

class CreditCardPayment : public IPayment {
public:
    void ProcessPayment(double amount) override {
        std::cout << "Paid by credit card: " << amount << std::endl;
    }
};

