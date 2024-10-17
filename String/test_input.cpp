#include "string.hpp"
#include <fstream>
int main(){
    std::ifstream input;
    input.open("input_test.txt");
    
    String test;
    while(input >> test){
        std::cout << test << std::endl;
    }
    
    input.close();
    std::cout << "Done testing input operator" << std::endl;


    return 0;
}