#pragma once
#include "stdafx.h"
#include "catch/catch.hpp"
#include "..\Vending Machine\TotalTaken.h"

namespace TotalTakenTest
{
	int TestTotalTakenStartup()
	{
		std::ofstream("TESTTOTALTAKEN.txt");
		
		if (!std::ifstream("TESTTOTALTAKEN.txt"))
		{
			std::perror("Error creating file1.txt"); 
			return 1;
		}

		std::cout << std::ifstream("file1.txt").rdbuf() << '\n'; // print file
		return 0;
	}
	int TestTotalTakenCleanup()
	{
		std::remove("TESTTOTALTAKEN.txt");

		if (!std::ifstream("TESTTOTALTAKEN.txt"))
		{
			std::perror("Error opening deleted file");
			return 1;
		}
		return 0;
	}

	

	TEST_CASE("InsertValueintofile")
	{
		TestTotalTakenStartup();
	}


}
