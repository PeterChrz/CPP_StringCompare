# CPP_StringCompare
String compare program that utilizes headers and functions.

# Obstacles & Fixes
Primary objective of the program is to demonstrate the use of the string library and including that in seperate files containing the function. There were a few obstacles, the primary being the g++ compiler in Linux doesn't like Length.h and Length.cpp (our function files) to have "string ..." in our declaration. The fix for this was to specify that string is std::string.

Also when compiling the flag -std=c++11 must be used, as the string std library doesn't work without it in g++. 

# Included Files
Length.cpp  - Our length compare function.

Lenth.h     - The header file for our function.

String.cpp  - Our main program, which utilizes the Length.h library.

# Expected Output
[admin@TZMP StringCompare]$ ./StringLength 

Who are you?

StampedePress

Hello, StampedePress

"Hello, StampedePress" is 20 characters long.

# How To Compile
To compile and link this program on a standard RHEL based Linux system, like CentOS/RHEL/Fedora we can run the following command:
g++ -o StringLength Length.cpp Length.h String.cpp -std=c++11
