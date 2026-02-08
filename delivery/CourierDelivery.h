#pragma once
#include <iostream>
#include "IDelivery.h"

class CourierDelivery : public IDelivery {
public:
    void DeliverOrder() override {
        std::cout << "Delivered by courier" << std::endl;
    }
};

