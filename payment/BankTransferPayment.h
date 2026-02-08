#pragma once
#include <iostream>
#include "IPayment.h"

class BankTransferPayment : public IPayment {
public:
    void ProcessPayment(double amount) override {
        std::cout << "Paid by bank transfer: " << amount << std::endl;
    }
};

