#pragma once

class IDiscountRule {
public:
    virtual double Apply(double total) = 0;
    virtual ~IDiscountRule() = default;
};
