#include <iostream>
#include <string>
#include "Length.h"

using namespace std;

int main()
{
 string name;
 cout << "Who are you?" << endl;
 cin >> name;

 string greeting = "Hello, " + name;

 cout << greeting << endl;
 
 int l = slength(greeting);

 cout << "\"" + greeting + "\" is " << l << " characters long." << endl;

 return 0;
}
