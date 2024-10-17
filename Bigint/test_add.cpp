// bigint Test Program
//
// Tests:  int constructor, uses ==
// 
// NEED TO IMPLEMENT
//
#include <iostream> 
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left(CAPACITY);
      bigint right(3);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == CAPACITY);
      assert(right  == 3);
      assert(result == 203);
    }
    
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left(10000000);
      bigint right(10000000);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 10000000);
      assert(right  == 10000000);
      assert(result == 20000000);
    }
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left(43);
      bigint right(6240);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 43);
      assert(right  == 6240);
      assert(result == 6283);
    }
{ //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left(32);
      bigint right(324143321);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 32);
      assert(right  == 324143321);
      assert(result == 324143353);
    }
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left(2147483600);
      bigint right(47);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 2147483600);
      assert(right  == 47);
      assert(result == 2147483647);
    }
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left(22222);
      bigint right(33333);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 22222);
      assert(right  == 33333);
      assert(result == 55555);
    }
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left("432334903495705372");
      bigint right("624238757305237900");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "432334903495705372");
      assert(right  == "624238757305237900");
      assert(result == "1056573660800943272");
    }
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left(5);
      bigint right(6);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 5);
      assert(right  == 6);
      assert(result == 11);
    }
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left("4637368375653");
      bigint right("53763457765425555");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "4637368375653");
      assert(right  == "53763457765425555");
      assert(result == "53768095133801208");
    }
    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left("365775555757374");
      bigint right("51566763377889899");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "365775555757374");
      assert(right  == "51566763377889899");
      assert(result == "51932538933647273");
    }

    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left("32490823109380918");
      bigint right("34293200320294023");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "32490823109380918");
      assert(right  == "34293200320294023");
      assert(result == "66784023429674941");
    }

    { //MY TEST CASES
      //------------------------------------------------------
      // Setup fixture
      bigint left("3426545645236786546");
      bigint right("547684356875434567");
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == "3426545645236786546");
      assert(right  == "547684356875434567");
      assert(result == "3974230002112221113");
    }
    //Add test cases as needed.
    
    
    
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

