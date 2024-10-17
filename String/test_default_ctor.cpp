#include <iostream> 
#include <cassert>
#include "string.hpp"
int main () {
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  test;

        // VERIFY
        assert(test == '\0');
    }

    std::cout << "Done testing default constructor." << std::endl;
    return 0;
}