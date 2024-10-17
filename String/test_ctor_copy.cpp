#include "string.hpp"
int main(){
    String test("This is interesting");
    
        // Verify
        assert(test == "This is interesting");
        std::cout << "This is interesting == ";
        std::cout << test;           
        std::cout << std::endl;

        test = String("interesting");   //Check re-assignment.
        assert(test == "interesting");
        std::cout << "interesting == ";
        std::cout << test;
        std::cout << std::endl;
}