#pragma once
class Money
{
public:
	Money();
	Money(int monetaryv);
	int GetMonetaryValue();
	~Money();
	virtual bool operator ==(const Money &obj);
	virtual bool compare(const Money &obj);



	// 




private:
	int monetaryValue;
};

