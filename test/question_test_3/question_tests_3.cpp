#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Verify value returned is in the range of 1 to 6")
{
	for (int i = 0; i < 10; i++)
	{
		int result = roll_die();
		REQUIRE(result >= 1);
		REQUIRE(result <= 6);                          //didn't write as REQUIRE((result >= 1) && (result <=6)) because it has errors;
	}
}


