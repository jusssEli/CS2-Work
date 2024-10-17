#include "utilities.hpp"
#include "stack.hpp"
String postfix(String& input){
    stack<String> sstack;
    std::vector<String> spaced = input.split(' ');
    int i = 0;
    String current = spaced[0];
    while(current != ';'){
            if(current == ')'){
                String right = sstack.pop();
                String oper = sstack.pop();
                String left = sstack.pop();
                sstack.push(left + " " + right + " " + oper);
            }
            else if(current != '('){
                sstack.push(current);
            }
            current = spaced[++i];

        }
        return sstack.top();
    }
String evaluate(int& TMPn ,std::ostream& out, String& left, String& token, String& right){
    //psuedocode by Noah Michele Struck
    //evaluate:
//   get the opcode based on token (+, -, *, /)
//   create the output string using LD and ST
//   print that to the ostream
//   return TMPn string ("TMP" + register number)
    String opcode;
    if(token == '+'){
        // return TMPn(left + right);
        opcode = "AD";
        
    }
    else if(token == '-'){
        opcode = "SB";
    }
    else if(token == '*'){
        opcode = "MU";
    }
    if(token == '/'){
        opcode = "DV";
    }
    out << "    LD    " << left << std::endl;
    out << "    " << opcode << "    "  << right << std::endl;
    out << "    ST    TMP" << TMPn << std::endl;
    return "TMP" + toString(TMPn);

}
String assembly(String& t, std::ostream& out){
    size_t i = 0;
    stack<String> astack;
    std::vector<String> space = t.split(' ');
    int reg = 1;
    String current = space[0];
    while(i < space.size()){
        if(current != '+' && current != '-' && current != '*' && current != '/'){
            astack.push(current);
        }
        else{
            String right = astack.pop();
            String left = astack.pop();
            astack.push(evaluate(reg, out, left, current, right));
            reg++;
        }

        current = space[++i];
    }
    return astack.top();
}
    

// ( AX + ( B * C ) ) ;
// ( ( AX + ( B * CY ) ) / ( D - E ) ) ;
// ( ( A + B ) * ( C + E ) ) ;
// ( AX * ( BX * ( ( ( CY + AY ) + BY ) * CX ) ) ) ;
// ( ( H * ( ( ( ( A + ( ( B + C ) * D ) ) * F ) * G ) * E ) ) + J ) ;
