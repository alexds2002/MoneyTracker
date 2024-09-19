#pragma once

#include <string>
#include <unordered_map>

#include "account.h"
#include "transaction.h"

class User
{
public:
    User(const std::string& accName, const double startingBalance);
    void RegisterNewAccount(const std::string& accName, const double startingBalance = 0);
    Transaction CreateNewTransaction(const double amount, const Category category);
    void SwitchAccount();

private:
    // all accounts of the user
    std::unordered_map<std::string, Account> m_accounts;
    // key for the current account
    std::string m_currentAccount;

};

