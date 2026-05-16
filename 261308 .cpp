#include <iostream>
#include <string>
using namespace std;
int main()
{
  string name ="Lee Yen Tat"
int day=2, month=5, year=2013;

cout << "Enter your name:";
getline (cin,name);

cout << "Hello" << name <<",your birthday is on" << day << "-" << month << "-" << year << ".";
return 0;
}
