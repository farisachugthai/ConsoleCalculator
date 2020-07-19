#pragma once
// The line we added declares a new function called Calculate.

// C++ code is organized int header and source files. Functions and variables are
// normally declared, that is, given a name and a type, in header files.
// They are then implemented in source files.

// To access code defined in other files, use include statements as we have in
// ./Calculator.cpp using the form.:
// #include "filename.h"

class Calculator
{
public:
	double Calculate(double x, char oper, double y);
};

