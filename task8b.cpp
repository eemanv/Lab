#include <iostream>
using namespace std;
main () 
{
int number;
int first; 
int second; 
int third; 
int fourth;
int total;
cout << "Enter a four digit number: ";
cin >> number;
first = number % 10;
number = number / 10;
second = number % 10;
number = number / 10;
third = number % 10;
number = number / 10;
fourth = number % 10;
total = first + second + third + fourth;
cout << "Your sum is: " << total;
}