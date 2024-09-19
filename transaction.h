#pragma once

/*
 * class for handling expences of all sorts
 */

// The category of each transaction
enum Category
{
    Groceries,
    Salary,
    Rent,
    Car,
    Subscriptions,
    Health,
    Taxes,
    Sell,
    Other
};

// class to store the current transaction being done
class Transaction
{
public:
    Transaction(const double amount, Category category = Category::Other);

    inline double GetAmount() const noexcept;
    inline void SetAmount(const double amount) noexcept;
private:
    double m_amount{0};
    Category m_category{Category::Other};
};

