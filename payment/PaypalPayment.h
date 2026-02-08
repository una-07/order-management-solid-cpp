#pragma once
#include <iostream>
#include "IPayment.h"

class PayPalPayment : public IPayment {
public:
    void ProcessPayment(double amount) override {
        std::cout << "Paid via PayPal: " << amount << std::endl;
    }
};

