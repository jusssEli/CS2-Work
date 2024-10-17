#include "string.hpp"
String();                          //Empty string
String(char){

}                    //Stirng('x')
String(const char[]){

}          //String("abcd")

int capacity()const{

} //Max chars that can be stored
int length() const{

} //Number of char in string
char& operator[](int){

}                      //Accessor/Modifier
char operator[](int)const{

} //Accessor

String& operator+=(const String& rhs){

}             //Concatenation
bool operator==(const String& rhs)const{

}
bool operator<(const String& rhs)const{

}
String substr(int start, int end)const{

} //Sub from staring to ending positions
int findch(int index,  char pos) const{

} //Location of charater starting at a position
int findstr(int index,  const String& pos) const{

} //Location of string starting at a position

friend  std::istream& operator>>(std::istream& in, String& rhs){

}
friend  std::ostream& operator<<(std::ostream& os, const String& rhs){

}

String operator+ (String lhs, const String& rhs){

}
bool operator==(const char[] ch,  const String& rhs){

}
bool operator==(char ch,const String& rhs){

}
bool operator<(const char[] ch,  const String& rhs){

}
bool operator<(char ch,const String& rhs){

}
bool operator<=(const String& lhs, const String& rhs){

}
bool operator!=(const String& lhs, const String& rhs){

}
bool operator>=(const String& lhs, const String& rhs){

}
bool operator>(const String& lhs, const String& rhs){

}