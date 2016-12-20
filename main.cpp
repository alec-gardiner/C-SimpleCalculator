#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

float a,b,sum;
int opr;

cout << "Console Calculator || Created by: Alec Gardiner" << endl;
cout << "Would you like to add,subtract, multiply or divide?" <<endl;
cout << "1)Add" <<endl;
cout << "2)subtract" <<endl;
cout << "3)multiply" <<endl;
cout << "4)divide" <<endl;
cin  >> opr;

switch(opr){
case 1:
    cout << "What is the first integer?" << endl;
cin >> a;
cout << "What is the second integer?" << endl;
cin >> b;
sum  = a + b;
cout << "The Sum of the two numbers is: " << sum << endl;
system("pause");
    break;
case 2:
    cout << "What is the first integer?" << endl;
cin >> a;
cout << "What is the second integer?" << endl;
cin >> b;
 sum = a - b;
cout << "The difference of the two numbers is: " << sum << endl;
system("pause");
    break;
case 3:
    cout << "What is the first integer?" << endl;
cin >> a;
cout << "What is the second integer?" << endl;
cin >> b;
sum = a * b;
cout << "The product of the two numbers is: " << sum << endl;
system("pause");
    break;
case 4:
    cout << "What is the first integer?" << endl;
cin >> a;
cout << "What is the second integer?" << endl;
cin >> b;
sum = a / b;
cout << "The remainder of the two numbers is: " << sum << endl;
system("pause");
    break;
default:
    cout << "Please enter a valid operator. (+,-,*,/)";
    system("pause");
    break;
};


return 0;
}
