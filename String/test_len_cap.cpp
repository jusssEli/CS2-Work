#include "string.hpp"
int main(){
    {
        String test = "abcdefgh";

        int result = test.length();
        int result2 = test.capacity();
        std::cout << "length: " << result << std::endl;
        std::cout << "capacity: " << result2 << std::endl;
        assert(result == 8);
        assert(result2 == 8);
    }
    return 0;
}