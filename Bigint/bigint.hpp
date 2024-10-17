//Elijah Rogers
//08-29-2023
//Project 1 header file
#ifndef CS2_BIGINT_HPP
#define CS2_BIGINT_HPP
#include <iostream>
const int CAPACITY = 200;
class bigint{
public:

    bigint();
    bigint(int);
    bigint(const char[]) ;
    int length() const;
    void debugPrint(std::ostream&) const;
    friend std::ostream& operator<<(std::ostream&, bigint&);
    bool operator==(bigint);
    int operator[](const int&) const;
    bigint operator+(const bigint& rhs) const;

    bigint timesDigit(int rhs) const;
    bigint times10(int rhs) const;
    bigint operator*(const bigint& rhs) const;

private:
    int bigintArray[CAPACITY];
};
#endif
std::istream& operator >>(std::istream&, bigint&); //input