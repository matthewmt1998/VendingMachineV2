// Vending Machine Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#define CATCH_CONFIG_RUNNER // This tells Catch that we will provide a main() - only do this in one cpp file
#include "catch/catch.hpp"

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
