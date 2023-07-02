#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify expected fahrenheit")
{
	int converted_1 = get_fahrenheit(37) * 10;        //convert double to int by times 10 to compare
	int expected_1 = 98.6 * 10;
	REQUIRE(converted_1 == expected_1);                                                   

	REQUIRE(get_fahrenheit(25) == 77);

	REQUIRE(get_fahrenheit(0) == 32);
}