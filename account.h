#pragma once

#include <string>

class Transaction;

class Account
{
public:
    Account(const std::string& accountName);
    Account(const std::string& accountName, const double initialBalance);
    ~Account();

    inline double GetBalance() const noexcept;
    // The only function that should change the balance
    inline void UpdateBalance(const Transaction& transaction);
private:
     std::string m_accountName{};
     double m_balance{0};
};

