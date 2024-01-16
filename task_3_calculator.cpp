#include <iostream>

using namespace std;

void startCalculator();
double getResult(double first, char operation, double second);

int main()
{
    cout << endl << "Module 4, task 3." << endl << "CALCULATOR. A row consists of the arithmetic expression with integers and operation signs: +, -, *, /. Validate the expression and calculate it." << endl << endl;
    startCalculator();

    return 0;
}

void startCalculator()
{
    double first = 0.0;
    double second = 0.0;
    double result = 0.0;
    char operation = '+';

    while (true) {
        cout << "Please, enter the operation to perform (a+b | a-b | a*b | a/b): ";
        cin >> first >> operation >> second;
        if (operation == '/' && second == 0) {
            cout << "Error! Can't divide by zero!" << endl;
            continue;
        }
        result = getResult(first, operation, second);
        cout << first << " " << operation << " " << second << " = " << result << endl;
    }
}

double getResult(double first, char operation, double second)
{
    if (operation == '+') {
        return first + second;
    }
    else if (operation == '-') {
        return first - second;
    }
    else if (operation == '*') {
        return first * second;
    }
    else if (operation == '/') {
        return first / second;
    }
    else {
        return 0;
    }
}