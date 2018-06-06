#include "stdafx.h"
#include "TotalTaken.h"

TotalTaken::TotalTaken()
{
}

TotalTaken::~TotalTaken()
{
}

void TotalTaken::AddTotalTaken(Money value)
{
	std::ofstream myfile;
	myfile.open("TotalTaken.txt");
	myfile << "Writing this to a file." << std::endl;
	myfile.close();
}

void TotalTaken::TakeAwayTotalTaken(Money value)
{
	std::ofstream myfile;
	myfile.open("TotalTaken.txt");
	myfile << "Writing this to a file." << std::endl;
	myfile.close();
}


/*

RECORD THE TOTAL MONEY TAKEN IN
This is going to be done by having a txt file.

ofstream myfile;
myfile.open("example.txt");
myfile << "Writing this to a file.\n";
myfile.close();


*/