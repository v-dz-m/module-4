#include <iostream>
#include <cstring>

using namespace std;

string replaceDigitsInRow(string input);

int main()
{
    string inputStr = "";
    string modifiedStr = "";

    cout << endl << "Module 4, task 1." << endl << "PLUS-MINUS. Change each odd digit in a text to an equal number of minuses and each even digit to an equal number of pluses." << endl << endl;
    cout << "Please, enter a row: ";
    cin >> inputStr;

    modifiedStr = replaceDigitsInRow(inputStr);
    cout << modifiedStr;

    return 0;
}

string replaceDigitsInRow(string input)
{
    string result = "";
    for (char symbol : input) {
        if (isdigit(symbol)) {
            int number = symbol - '0';
            result += (number % 2) ? string(number, '-') : string(number, '+');
        }
        else {
            result += symbol;
        }
    }
    return result;
}