#include "stack.hpp"
int main(){
    {
        stack<char> test;
        assert(test.empty());
    }
    
    std::cout << "Done testing default ctor" << std::endl; //file done
    
}
//stack     ();