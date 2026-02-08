#include "order/Order.h"
#include "payment/CreditCardPayment.h"
#include "delivery/CourierDelivery.h"
#include "discount/DiscountCalculator.h"
#include "discount/PercentageDiscount.h"
#include "notification/EmailNotification.h"

int main() {
    Order order;
    order.AddItem("Laptop", 1, 500000);
    order.AddItem("Mouse", 2, 5000);

    DiscountCalculator discountCalculator;
    discountCalculator.AddRule(std::make_shared<PercentageDiscount>(0.1));

    double total = order.CalculateTotal();
    double finalPrice = discountCalculator.Calculate(total);

    order.SetPayment(std::make_shared<CreditCardPayment>());
    order.SetDelivery(std::make_shared<CourierDelivery>());

    order.Pay(finalPrice);
    order.Deliver();

    EmailNotification notification;
    notification.SendNotification("Order successfully processed");

    return 0;
}
