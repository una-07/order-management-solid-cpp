#pragma once
#include <vector>
#include <memory>
#include "IDiscountRule.h"

class DiscountCalculator {
    std::vector<std::shared_ptr<IDiscountRule>> rules;
public:
    void AddRule(std::shared_ptr<IDiscountRule> rule) {
        rules.push_back(rule);
    }

    double Calculate(double total) {
        for (auto& rule : rules)
            total = rule->Apply(total);
        return total;
    }
};

