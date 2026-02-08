#pragma once

class IDelivery {
public:
    virtual void DeliverOrder() = 0;
    virtual ~IDelivery() = default;
};
