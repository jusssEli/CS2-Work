#include "stack.hpp"
int main(){
    {
        //this is the right way
        stack<String> test;
        test.push("This is interesting");
        
        stack<String> test2 = test;

        assert(test.top() == test2.top);
    
    }
    {
        stack<int>test;
        test.push(789);
        assert(test.top() == 789);
    }
    {
        stack<char> test;
        test.push('x');
        assert(test.top() == 'x');
    }
    {
        stack<String> test;
        test.push("No me gusta test.push.push.push cases");
        assert(test.top() == "No me gusta test.push.push.push cases");
    }
    {
        stack<int> test;
        test.push(32543);
        assert(test.top() == 32543);
    }
    {
        stack<char>test;
        test.push('v');
        assert(test.top() == 'v');
    }
    {
        stack<String> test;
        test.push("This is absolutely mind numbing");
        assert(test.top() == "This is absolutely mind numbing");
        
    }
    {
        stack<int> test;
        test.push(35453439);
        assert(test.top() == 35453439);
       
    }
    {
        stack<char> test;
        test.push('h');
        assert(test.top() == 'h');
    }
    {
        stack<String> test;
        test.push("FINALLY THE LAST ONE");
        assert(test.top() == "FINALLY THE LAST ONE");
        
    }
    
    std::cout << "Done test.pushing Assignment" << std::endl;
    //stack<type> 
    //push
    //assert top is what pushed
}