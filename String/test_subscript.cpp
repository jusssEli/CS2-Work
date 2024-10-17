#include "string.hpp"
int main() {
     {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[4] = {'h','o','l','a'};
        
        String  test(x);

        // TEST
        char result = x[0];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'h');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[4] = {'c','o','m','o'};
        
        String  test(x);

        // TEST
        char result = x[1];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'o');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[5] = {'e','s','t','a','s'};
        
        String  test(x);

        // TEST
        char result = x[0];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'e');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[5] = {'r','e','b','e','l'};
        
        String  test(x);

        // TEST
        char result = x[2];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'b');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[5] = {'p','r','i','n','t'};
        
        String  test(x);

        // TEST
        char result = x[2];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'i');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[6] = {'c','a','r','r','o','t'};
        
        String  test(x);

        // TEST
        char result = x[5];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 't');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[7] = {'r','a','c','e','c','a','r'};
        
        String  test(x);

        // TEST
        char result = x[4];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'c');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[6] = {'s','h','o','u','l','d'};
        
        String  test(x);

        // TEST
        char result = x[1];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'h');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[7] = {'o','b','s','c','u','r','e'};
        
        String  test(x);

        // TEST
        char result = x[4];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'u');
    }
    {
        //------------------------------------------------------
        // SETUP FIXTURE


        char x[7] = {'e','d','i','f','a','c','e'};
        
        String  test(x);

        // TEST
        char result = x[3];
        std::cout << "Result: " << result << std::endl;
        // VERIFY
        assert(test == String(x));
        assert(result == 'f');
    }
    
}