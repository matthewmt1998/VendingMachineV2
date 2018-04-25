#pragma once
#include <iostream>
#include <fstream>
#include "Money.h"

class TotalTaken
{
public:
	TotalTaken();
	~TotalTaken();
	void AddTotalTaken(Money value);
	void TakeAwayTotalTaken(Money value);

};