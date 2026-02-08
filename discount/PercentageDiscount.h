#pragma once
#include "IDiscountRule.h"

class PercentageDiscount : public IDiscountRule {
    double percent;
public:
    PercentageDiscount(double p) : percent(p) {}
    double Apply(double total) override {
        return total * (1 - percent);
    }
};

