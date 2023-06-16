#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "fizzbuzz.h"

TEST_CASE("The FizzBuzz", "[fizzbuzz]") {
    SECTION("Return number as string when the given one is not divisible by 3 or 5") {
        REQUIRE(fizzbuzz(1) == "1");
        REQUIRE(fizzbuzz(2) == "2");
        REQUIRE(fizzbuzz(4) == "4");
    }

    SECTION("Return Fizz when a given number is divisible by 3 only") {
        REQUIRE(fizzbuzz(3) == "Fizz");
        REQUIRE(fizzbuzz(6) == "Fizz");
    }

    SECTION("Return Buzz when a given number is divisible by 5 only") {
        REQUIRE(fizzbuzz(5) == "Buzz");
        REQUIRE(fizzbuzz(10) == "Buzz");
    }

    SECTION("Return Buzz when a given number is divisible by 15") {
        REQUIRE(fizzbuzz(15) == "FizzBuzz");
        REQUIRE(fizzbuzz(30) == "FizzBuzz");
    }
}