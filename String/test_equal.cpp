
#include "string.hpp"
int main(){

    {
        // Setup
        String test1("efd");
        String test2("efd");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "efd");
        assert(test2 == "efd");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;

    }

    {
        // Setup
        String test1("Is this a long enough of a string i hope its long. ");
        String test2("Is this a long enough of a string i hope its long. ");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "Is this a long enough of a string i hope its long. ");
        assert(test2 == "Is this a long enough of a string i hope its long. ");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;

    }

    
    {
       // Setup
        String test1("I believe this is a test.");
        String test2("I believe this is a test.");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "I believe this is a test.");
        assert(test2 == "I believe this is a test.");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;
    }

    {
        // Setup
        String test1("testting testing");
        String test2("testting testing");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "testting testing");
        assert(test2 == "testting testing");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;
    }

    {
        // Setup
        String test1("sheeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeesh");
        String test2("sheeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeesh");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "sheeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeesh");
        assert(test2 == "sheeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeesh");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;
    }

    {
        //Setup
        String test1("no ducking way dog");
        String test2("no ducking way dog");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "no ducking way dog");
        assert(test2 == "no ducking way dog");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;
    }

    {
        //Setup
        String test1("this is absurdly boring");
        String test2("this is absurdly boring");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "this is absurdly boring");
        assert(test2 == "this is absurdly boring");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;
    }

    {
        //Setup
        String test1("who's ur friend that likes to play????????????");
        String test2("who's ur friend that likes to play????????????");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "who's ur friend that likes to play????????????");
        assert(test2 == "who's ur friend that likes to play????????????");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;
    }

    {
        //Setup
        String test1("Mr. Sun came up and he smiled at me....... said its gonna be a good one jus wait and see");
        String test2("Mr. Sun came up and he smiled at me....... said its gonna be a good one jus wait and see");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "Mr. Sun came up and he smiled at me....... said its gonna be a good one jus wait and see");
        assert(test2 == "Mr. Sun came up and he smiled at me....... said its gonna be a good one jus wait and see");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;
    }
        

    {
        //Setup
        String test1("jumped outta bed and i ran outside feeling so ........ ITS THE BEST DAY EVEEEEEEEERRRRRRRRRRRR");
        String test2("jumped outta bed and i ran outside feeling so ........ ITS THE BEST DAY EVEEEEEEEERRRRRRRRRRRR");
        // Test
        bool result = (test1 == test2);
        // Verify
        assert(test1 == "jumped outta bed and i ran outside feeling so ........ ITS THE BEST DAY EVEEEEEEEERRRRRRRRRRRR");
        assert(test2 == "jumped outta bed and i ran outside feeling so ........ ITS THE BEST DAY EVEEEEEEEERRRRRRRRRRRR");
        assert(result == true);
        std::cout << test1;
        std::cout << " == ";
        std::cout << test2;
        std::cout << std::endl;
    }
    return 0;

}