#include "PaymentMethod.h"

class CashPayment : PaymentMethod
{
public:
	CashPayment(int vInsertedCashValue);
	Money Payment(int paymentValue) override;
	bool ChangeNeeded() override;
	int returnPaymentValue() const;
	
	~CashPayment();
private:
	int m_cashInserted = 0;
	bool m_PossibleChangeState = true;
};

