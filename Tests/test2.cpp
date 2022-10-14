#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.cpp"


TEST_CASE( "2: Factorials of 1 and higher are computed", "[multi-file:2]" ) {
    CHECK( Factorial(0) == 1 );
    CHECK( Factorial(4) == 24 );
    CHECK( Factorial(3) == 6 );
    CHECK( Factorial(5) == 120 );
    CHECK( Factorial(6) == 720 );
}
