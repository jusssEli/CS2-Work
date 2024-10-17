#include "string.hpp"
int main(){
    {
        String test = "interesting";
        char ch = 't';
        
        int result = test.findch(0, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 2);
    
    }

{
        String test = "awkward";
        char ch = 'd';
        
        int result = test.findch(0, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 6);
    
    }

{
        String test = "boring";
        char ch = 'i';
        
        int result = test.findch(0, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 3);
    
    }

{
        String test = "interesting series of events as of right now";
        char ch = 'f';
        
        int result = test.findch(10, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 20);
    
    }

{
        String test = "beluga whale";
        char ch = 'w';
        
        int result = test.findch(0, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 7);
    
    }

{
        String test = "elephant";
        char ch = 'p';
        
        int result = test.findch(0, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 3);
    
    }

{
        String test = "nesteranko";
        char ch = 'o';
        
        int result = test.findch(5, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 9);
    
    }

{
        String test = "how tf i wake up from a dream to a nightmare";
        char ch = 'a';
        
        int result = test.findch(13, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 22);
    
    }

{
        String test = "ik you walkin up to heaven on them white stairs";
        char ch = 'i';
        
        int result = test.findch(30, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 37);
    
    }

{
        String test = "nobody love you till you dead that's when they might care";
        char ch = '\'';
        
        int result = test.findch(25, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 34);
    
    }

{
        String test = "weight on my shoulders but it aint a feather i pray the days will get better";
        char ch = 'd';
        
        int result = test.findch(0, ch); 
        std::cout << " Result: " << result << std::endl;
        
        assert(result == 18);
    
    }

    std::cout << "Done testing findCh" << std::endl;


    return 0;
}