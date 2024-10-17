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
            String postConv = postfix(str); // == assembly
            std::cout << "Postfix: " << postConv << std::endl;
            String asbConv = assembly(postConv, std::cout);
        }
    }
    if(argc == 3){
        std::ofstream postfixFile(argv[2]);
        char temp[200];
        while(infixFile.getline(temp, 200)){ 
            String str = String(temp);
            String postConv = postfix(str); // == assembly
            postfixFile << "Postfix: " << postConv << std::endl;
            String asbConv = assembly(postConv, postfixFile);
        }
        postfixFile.close();
    }

    infixFile.close();
}
// #include "utilities.hpp"
// #include <fstream>
// int main(int argc, char *argv[]){
//     std::cout << argc << std::endl;
//     if(argc < 2)
//         std::cerr << "Missing input file" << std::endl;
//     std::ifstream postfixFile(argv[1]);
//     if(argc == 2){
//         char temp[200];
//         while(postfixFile.getline(temp, 200)){ 
//             String str = String(temp);
//             String asbConv = assembly(str, std::cout); // == assembly
//         }
//     }
//     if(argc == 3){
//         std::ofstream asbFile(argv[2]);
//         char temp[200];
//         while(postfixFile.getline(temp, 200)){ 
//             String str = String(temp);
//             postfix(str);
//             String asbConv = assembly(str, asbFile);
//         }
//         asbFile.close();
//     }

//     postfixFile.close();
// }
