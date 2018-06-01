#include "PaymentMethod.h"

class CashPayment : PaymentMethod
{
public:
	CashPayment(int paymentValue);
	Money Payment(int paymentValue) override;
	bool ChangeNeeded() override;
	int returnPaymentValue() override;
	
	~CashPayment();
private:
	int m_cashInserted = 0;
	bool m_PossibleChangeState = true;
};

