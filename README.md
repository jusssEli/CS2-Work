# CS2-Work
My CS2 Projects
Project 1 Bigint : The data type int in C++ is limited to the word size of the CPU architecture (e.g., 32 or 64 bit). Therefore you can only work with signed integers up to 2,147,483,647 (in the case of signed 32 bit). Unsigned 32 bit is still only 10 digits. Maxint for 64 is somewhat larger at 9,223,372,036,854,775,807 but still only 19 digits. Clearly, this causes difficulties for working with very large integer values (say 100 digits). I developed an ADT (called bigint) that can take any size postive integer. It will work for 100, 200, 500, etc. digit integers and mathematical operations can be performed on the integers.

Project 2 String : The Apache web server produces information detailing web page accesses, this information is stored in a log file in the Apache Common log file format. I developed a program to process this log file and keep track of the different types of log entries.

Implemented the methods:

operator[] (int) - both accessor and modifier versions

length() - returns number of characters in string

capacity() - returns the max number of characters that can be stored in the string

substr(int start, int end) - returns the sub string from start to end positions (inclusive)

findch(int start, char ch) - returns location of ch at or after start, returns -1 if not found

findstr(int start, cosnt String& str) - returns the location of str at or after start, returns -1 if not found.

Overload both I/O operators - Input should read in one word at a time. 
