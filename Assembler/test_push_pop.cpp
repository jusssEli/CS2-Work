#include "stack.hpp"
int main(){
    {
        stack<int> test;
        test.push(20);
        test.push(21);
        test.push(22);
        test.push(23);
        test.push(24);
        
        assert(test.pop() == 24);
        assert(test.pop() == 23);
        assert(test.pop() == 22);
        assert(test.pop() == 21);
        assert(test.pop() == 20);

    }
    {
        stack<String> test;
        test.push("This");
        test.push("is");
        test.push("painfully");
        test.push("boring");
        test.push("rn");
        
        
        assert(test.pop() == "rn");
        assert(test.pop() == "boring");
        assert(test.pop() == "painfully");
        assert(test.pop() == "is");
        assert(test.pop() == "This");
    }
    {
        stack<char> test;
        test.push('a');
        test.push('b');
        test.push('c');
        test.push('d');
        test.push('e');
        
        
        assert(test.pop() == 'e');
        assert(test.pop() == 'd');
        assert(test.pop() == 'c');
        assert(test.pop() == 'b');
        assert(test.pop() == 'a');
    }
    {
        stack<String> test;
        test.push("A");
        test.push("String");
        test.push("Test");
        test.push("Case");
        test.push("Bruh");
        
        assert(test.pop() == "Bruh");
        assert(test.pop() == "Case");
        assert(test.pop() == "Test");
        assert(test.pop() == "String");
        assert(test.pop() == "A");
    }
    {
        stack<int> test;
        test.push(7675);
        test.push(766757);
        test.push(776565776);
        test.push(765766775);
        test.push(6756);
        
        assert(test.pop() == 6756);
        assert(test.pop() == 765766775);
        assert(test.pop() == 776565776);
        assert(test.pop() == 766757);
        assert(test.pop() == 7675);
    }
    {
        stack<char> test;
        test.push('h');
        test.push('o');
        test.push('i');
        test.push('s');
        test.push('u');
        
        assert(test.pop() == 'u');
        assert(test.pop() == 's');
        assert(test.pop() == 'i');
        assert(test.pop() == 'o');
        assert(test.pop() == 'h');
    }
    {
        stack<String> test;
        test.push("Now");
        test.push("Right");
        test.push("YouTube");
        test.push("Watching");
        test.push("Im");
        
        assert(test.pop() == "Im");
        assert(test.pop() == "Watching");
        assert(test.pop() == "YouTube");
        assert(test.pop() == "Right");
        assert(test.pop() == "Now");
    }
    {
        stack<int> test;
        test.push(65);
        test.push(54);
        test.push(4326);
        test.push(343);
        test.push(653);
        
        assert(test.pop() == 653);    
        assert(test.pop() == 343);
        assert(test.pop() == 4326);
        assert(test.pop() == 54);
        assert(test.pop() == 65);
    }
    {
        stack<char> test;
        test.push('t');
        test.push('r');
        test.push('e');
        test.push('w');
        test.push('q');
        
        assert(test.pop() == 'q');
        assert(test.pop() == 'w');
        assert(test.pop() == 'e');
        assert(test.pop() == 'r');
        assert(test.pop() == 't');
    }
    {
        stack<String> test;
        test.push("Last");
        test.push("The");
        test.push("Is");
        test.push("This");
        test.push("Whelp");
        
        assert(test.pop() == "Whelp");
        assert(test.pop() == "This");
        assert(test.pop() == "Is");
        assert(test.pop() == "The");
        assert(test.pop() == "Last");
    }
    std::cout << "Done Testing Push Pop" << std::endl;
    
}