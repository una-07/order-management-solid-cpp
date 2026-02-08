#pragma once
#include <iostream>
#include "IDelivery.h"

class PickUpPointDelivery : public IDelivery {
public:
    void DeliverOrder() override {
        std::cout << "Delivered to pickup point" << std::endl;
    }
};

