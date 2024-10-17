#include "string.hpp"
int main(){
    {
        String test = "im curious as to the extent that this works";
        String test2= "the";
        
        int result = test.findstr(12, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 17);
    
    }


    {
        String test = "this will probably fail too";
        String test2= "will";
        
        int result = test.findstr(0, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 5);
    
    }

    {
        String test = "another failure in the works";
        String test2= "failure";
        
        int result = test.findstr(0, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 8);
    
    }

    {
        String test = "failure is inevitable";
        String test2= "inevitable";

        
        int result = test.findstr(0, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 11);
    
    }

    {
        String test = "Im really bad at this";
        String test2= "bad";
        
        int result = test.findstr(0, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 10);
    
    }

    {
        String test = "No problemo hombre. Es no muy dificil";
        String test2= "muy";
        
        int result = test.findstr(12, test2); 
        std::cout << "Result: " << result << std::endl;
        assert(result == 26);
    
    }

    {
        String test = "ive changed to spanish ig";
        String test2= "ged";
        
        int result = test.findstr(0, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 8);
    
    }

    {
        String test = "a mistake was made ... me";
        String test2= "...";
        
        int result = test.findstr(12, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 19);
    
    }

    {
        String test = "im struggling and need help";
        String test2= "help";
        
        int result = test.findstr(12, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 23);
    
    }

    {
        String test = "21 by polo g goes hard lowkey";
        String test2= "polo";
        
        int result = test.findstr(0, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 6);
    
    }

    {
        String test = "im incredibly depressed but no on knows";
        String test2= "pressed";
        
        int result = test.findstr(12, test2); 
        std::cout << "Result: " << result << std::endl;
        
        assert(result == 16);
    
    }


    std::cout << "Done testing Find String" << std::endl;
    return 0;
}