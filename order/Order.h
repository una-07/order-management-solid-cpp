#pragma once
#include <vector>
#include <memory>
#include "../payment/IPayment.h"
#include "../delivery/IDelivery.h"
#include "OrderItem.h"

class Order {
    std::vector<OrderItem> items;
    std::shared_ptr<IPayment> payment;
    std::shared_ptr<IDelivery> delivery;

public:
    void AddItem(const std::string& name, int quantity, double price) {
        items.push_back({name, quantity, price});
    }

    void SetPayment(std::shared_ptr<IPayment> p) {
        payment = p;
    }

    void SetDelivery(std::shared_ptr<IDelivery> d) {
        delivery = d;
    }

    double CalculateTotal() const {
        double total = 0;
        for (const auto& item : items)
            total += item.price * item.quantity;
        return total;
    }

    void Pay(double amount) {
        payment->ProcessPayment(amount);
    }

    void Deliver() {
        delivery->DeliverOrder();
    }
};

