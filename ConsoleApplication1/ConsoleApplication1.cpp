// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Lo and behold that it does in fact work!
// https://docs.microsoft.com/en-us/cpp/get-started/tutorial-console-cpp?view=vs-2019/ 


#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
         << endl;

    Calculator c;
    while (true)
    {
        cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        cout << "Result is: " << result << endl;
    }

    return 0;
}
