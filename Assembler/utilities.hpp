#ifndef CS2_UTIL_HPP_
#define CS2_UTIL_HPP_
#include "stack.hpp"
#include <iostream>
#include "../string/string.hpp"

String postfix(String&);
String evalutate(int& TMPn,std::ostream&, String&, String&, String&);
String assembly(String&, std::ostream&);
#endif