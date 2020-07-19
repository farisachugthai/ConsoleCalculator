// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*Understanding the code:

The #include statements allow you to reference code located in other files.
Sometimes, you may see a filename surrounded by angle brackets (<>); other
times, it's surrounded by quotes (" ").

In general, angle brackets are used when referencing the C++ Standard Library,
while quotes are used for other files.

The using namespace std; line tells the compiler to expect stuff from
the C++ Standard Library to be used in this file. Without this line, each
keyword from the library would have to be preceded with a std::, to denote its
scope. For instance, without that line, each reference to cout would have to be
written as std::cout.

The using statement is added to make the code look more clean.

The cout keyword is used to print to standard output in C++. The <<
operator tells the compiler to send whatever is to the right of it to the
standard output.

The endl keyword is like the Enter key; it ends the line and
moves the cursor to the next line. It is a better practice to put a \n inside
the string (contained by "") to do the same thing, as endl always flushes the
buffer and can hurt the performance of the program, but since this is a very
small app, endl is used instead for better readability. All C++ statements must
end with semicolons and all C++ applications must contain a main() function.
This function is what the program runs at the start. All code must be
accessible from main() in order to be used.
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b"
        << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
