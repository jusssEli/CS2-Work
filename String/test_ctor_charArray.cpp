#include "string.hpp"
int main(){
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[3] = {'a','b','c'};
        String  test(x);

        // VERIFY
        assert(test == String(x));
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[9] = {'a','b','c','a','b','c','a','b','c'};
        String  test(x);

        // VERIFY
        assert(test == String(x));
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[19] = {'a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a'};
        String  test(x);

        // VERIFY
        assert(test == String(x));
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[30] = {'a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c'};
        String  test(x);

        // VERIFY
        assert(test == String(x));
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[42] = {'a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c'};
        String  test(x);

        // VERIFY
        assert(test == String(x));
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[15] = {'a','b','c','a','b','c','a','b','c','a','b','c','a','b','c'};
        String  test(x);

        // VERIFY
        assert(test == String(x));
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        char x[54] = {'a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c','a','b','c'};
        String  test(x);

        // VERIFY
        assert(test == String(x));
    }
    
    std::cout << "Done testing Char Array Ctor" << std::endl;
    return 0;
}