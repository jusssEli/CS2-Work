#include "string.hpp"
int main(){
    
     {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('x');

        // VERIFY
        assert(test == 'x');
    }


    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('q');

        // VERIFY
        assert(test == 'q');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test(' ');

        // VERIFY
        assert(test == ' ');
    }

    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('E');

        // VERIFY
        assert(test == 'E');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('L');

        // VERIFY
        assert(test == 'L');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('I');

        // VERIFY
        assert(test == 'I');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('F');

        // VERIFY
        assert(test == 'F');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('U');

        // VERIFY
        assert(test == 'U');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('C');

        // VERIFY
        assert(test == 'C');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test('K');

        // VERIFY
        assert(test == 'K');
    }



    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing Char Ctor." << std::endl;
    return 0;

}