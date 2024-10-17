#include "stack.hpp"
int main(){
    {
        stack<char> test;
        stack<char> test2 = stack(test);
        //push things into test check if test2 = test

    }
    
    std::cout << "Done Testing Copy Constructor" << std::endl;  //file done
 
    
}

/*
T         pop       ();
void      push      (const T&);
*/