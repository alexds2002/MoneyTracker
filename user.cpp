#include <iostream>

#include "user.h"
#include "account.h"

User::User(const std::string& accName, const double startingBalance)
{
    RegisterNewAccount(accName, startingBalance);
}

void User::RegisterNewAccount(const std::string& accName, const double startingBalance)
{
    if(m_accounts.find(accName) == m_accounts.end())
    {
        m_accounts[accName] = Account(accName, startingBalance);
    }
    else
    {
        std::cerr << "Account with that name already exists.\n";
        std::flush(std::cerr);
    }
}

Transaction User::CreateNewTransaction(const double amount, const Category category)
{
}

