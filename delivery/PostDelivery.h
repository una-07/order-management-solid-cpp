#pragma once
#include <iostream>
#include "IDelivery.h"

class PostDelivery : public IDelivery {
public:
    void DeliverOrder() override {
        std::cout << "Delivered by post service" << std::endl;
    }
};

