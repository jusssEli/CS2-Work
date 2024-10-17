#include "utilities.hpp"
#include <fstream>
int main(int argc, char *argv[]){
    std::cout << argc << std::endl;
    if(argc < 2)
        std::cerr << "Missing input file" << std::endl;
    std::ifstream infixFile(argv[1]);
    if(argc == 2){
        char temp[200];
        while(infixFile.getline(temp, 200)){ 
            String str = String(temp);
            String postConv = postfix(str); 
            std::cout << postConv << std::endl; //c2
        }
    }
    if(argc == 3){
        std::ofstream postfixFile(argv[2]);
        char temp[200];
        while(infixFile.getline(temp, 200)){ 
            String str = String(temp);
            String postConv = postfix(str);
            postfixFile << postConv << std::endl; //c3
        }
        postfixFile.close();
    }

    infixFile.close();
}
// arcg < 2 no input
// arg c = 2 cout postfix of input file
// ar g c >= 3 output file argv 2


//I need to read in the program, an input and display an output file.... what do you read in? This file below...but not directly...
//post fix should be argv[0] .. argv[1] should be the input infix file and -->argv[2] should be the output postfix file or should it?
//hence if argc < 2 im missing an input file
//so then go from input(infix) to postfix
//output
//close files
// ( AX + ( B * C ) ) ;
// ( ( AX + ( B * CY ) ) / ( D - E ) ) ;
// ( ( A + B ) * ( C + E ) ) ;
// ( AX * ( BX * ( ( ( CY + AY ) + BY ) * CX ) ) ) ;
// ( ( H * ( ( ( ( A + ( ( B + C ) * D ) ) * F ) * G ) * E ) ) + J ) ;