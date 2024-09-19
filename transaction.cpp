#include "transaction.h"

Transaction::Transaction(const double amount, const Category category)
                    : m_amount(amount), m_category(category)
{
}

double Transaction::GetAmount() const noexcept
{
    return m_amount;
}

void Transaction::SetAmount(const double amount) noexcept
{
    m_amount = amount;
}
