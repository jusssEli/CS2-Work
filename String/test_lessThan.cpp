#include "string.hpp"

int main() {

    {
        String one = 'a';
        String two = 'b';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == true);
    
    }

    {
        String one = 'r';
        String two = 'd';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == false);
    
    }

    {
        String one = 'h';
        String two = 'j';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == true);
    
    }

    {
        String one = 'f';
        String two = 'n';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == true);
    
    }

    {
        String one = 'm';
        String two = 'z';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == true);
    
    }

    {
        String one = 'n';
        String two = 'l';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == false);
    
    }

    {
        String one = 'v';
        String two = 'c';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == false);
    }

    {
        String one = 's';
        String two = 'w';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == true);
    
    }

    {
        String one = 'u';
        String two = 'x';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == true);
    }

    {
        String one = 'p';
        String two = 'y';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == true);
    
    }

    {
        String one = 'c';
        String two = 'a';
        
        bool result = one < two;
        std::cout << "Result: " << result << std::endl;
        
        assert(result == false);
    }

    
}