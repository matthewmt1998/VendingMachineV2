#pragma once
#include <vector>
#include "Transaction.h"

class TransactionStore : public Transaction
{
public:
	TransactionStore();
	~TransactionStore();
	std::vector<Transaction> m_TransStore;
	std::string FormatTransaction();
};

