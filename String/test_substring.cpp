#include "string.hpp"
int main() {
     {
        String tbd = "abcdefgh";
        String test;
        String test2;
        String test3;
        
        test  = tbd.substr(0,0);
        test2 = tbd.substr(0,4);
        
        assert(test  == "a");
        assert(test2 == "abcde");
    }
    
    {
        String tbd = "Squirt is the name of Crush's son in Finding Nemo";
        String test;
        
        test = tbd.substr(14,17);
        assert(test == "name"); 
    }
    
    {
        String tbd = "Insert Sentence Here";
        String test;
        
        test = tbd.substr(10,12);
        assert(test == "ten"); 
    }
    {
        String tbd = "I jus came home from work";
        String test;
        
        test = tbd.substr(6,9);
        assert(test == "came"); 
    }
    {
        String tbd = "And then I took a fat nap";
        String test;
        
        test = tbd.substr(18,20);
        assert(test == "fat"); 
    }
    {
        String tbd = "Now im, boutta do a regrade";
        String test;
        
        test = tbd.substr(20,26);
        assert(test == "regrade"); 
    }
    {
        String tbd = "Crooked Smile by J. Cole is top tier";
        String test;
        
        test = tbd.substr(0,6);
        assert(test == "Crooked"); 
    }
    {
        String tbd = "Im currently listening to Suicide Letter 3 by Trick James";
        String test;
        
        test = tbd.substr(26,32);
        assert(test == "Suicide"); 
    }
    {
        String tbd = "Every day I wonder if I'll make it to tomorrow....";
        String test;
        
        test = tbd.substr(12,17);
        assert(test == "wonder"); 
    }
    {
        String tbd = "This will be my final test case";
        String test;
        
        test = tbd.substr(16,20);
        assert(test == "final"); 
    }


    std::cout << "Done testing substr" << std::endl;

}