#include "bigint.hpp"

bigint::bigint() {
    for (int i = 0; i < CAPACITY; ++i) {
        bigintArray[i] = 0;
    }

}
bigint::bigint(int num) : bigint() {
    for (int i = CAPACITY - 1; i >= 0; --i) {
        bigintArray[i] = num % 10;
        num /= 10;
        if (num == 0) break;
    }
}

bigint::bigint(const char charInt[]) : bigint() {
    int charIntLength = 0;
    while (charInt[charIntLength] != 0) {
        ++charIntLength;
    }
    for (int i = 0; i < charIntLength; ++i) {
        bigintArray[(CAPACITY - charIntLength) + i] = int(charInt[i]) - int('0');
    }
}

void bigint::debugPrint(std::ostream& os) const {
    for (int i = CAPACITY - 1; i >= 0; --i) {
        os << bigintArray[i] << " | ";
    }
}

std::ostream& operator<<(std::ostream& os, bigint& input) { //if fordigi found put in stream-- add to counter length o
    int counter = 1;
    bool firstNum = false;
    for (int i = CAPACITY -1 ; i >= 0; --i) {
        if (!firstNum && input[i] != 0) { firstNum = true;  os << input[i]; }
        else if (firstNum) {
            os << input[i];
            ++counter;
        }
        if (counter == 80) { os << '\n'; counter = 0; } //init as false and set to true when !firstDigitFound && digit != 0

    }
    if (!firstNum) os << 0;
    return os;
}
int bigint::operator[](const int& input) const {
    return bigintArray[CAPACITY - 1 - input];
}
bool bigint::operator==(bigint rhs) {
    for (int i = CAPACITY - 1; i >= 0; --i){
        if(bigintArray[i] != rhs.bigintArray[i] ) return false;
    }
    return true; 
}
int bigint::length() const {
	int result = 0;
	while (bigintArray[result] != '\0')
		++result;
	return result;
}
bigint bigint::operator+(const bigint& rhs) const{
    bigint bi;
    int carry = 0;
	for (int i = CAPACITY - 1; i >= 0; --i) {
        int temp = bigintArray[i] + rhs.bigintArray[i] + carry;
        bi.bigintArray[i]= temp%10;
        carry = temp/10;
    }
    return bi;
}

std::istream& operator >>(std::istream& input, bigint& rhs){ 
    char buffer[CAPACITY] = {0};
    char ch;
    int i = 0;
    while(input >> ch){
        if(ch == ';') break;
        else {
                buffer[i] = ch;
                ++i;
        }
    }
    rhs = bigint(buffer);
    return input;

}
//buffer-- array of char[capacity], while(input >> ch){if c is ; break else buffer[i] = c; return new bigint of that string (buffer)}

bigint bigint::timesDigit(int rhs) const{
    int temp;
    int carry = 0;
    bigint bi;
    for(int i = CAPACITY - 1;  i >= 0; --i){
        temp = bigintArray[i]*rhs;
        carry = temp / 10;
        bi = temp % 10 + carry;
    }
    return bi;
}// 10^n change index to i-n 
bigint bigint::times10(int rhs) const{
    bigint bi;
    for(int i = rhs; i <CAPACITY; ++i){
        //bi = timesDigit(rhs) + (timesDigit(rhs) * 10);
        bi.bigintArray[i-rhs]= bigintArray[i];

    }
    return bi;
}
bigint bigint::operator*(const bigint& rhs) const{
    bigint product;
    for(int i = CAPACITY - 1; i >= 0; --i){
        bigint temp = timesDigit(rhs.bigintArray[i]);
        product = product + temp.times10(CAPACITY - 1 - i);  
    }
    return product;
}