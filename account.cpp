#include "account.h"
#include "transaction.h"

Account::Account(const std::string& accountName) : m_accountName(accountName), m_balance(0)
{
}

Account::Account(const std::string& accountName, const double balance) : m_accountName(accountName), m_balance(balance)
{
}

void Account::UpdateBalance(const Transaction& amount)
{
    // TODO(Alex): save transaction to csv -> Category, Amount, Date... and update current balance
}
