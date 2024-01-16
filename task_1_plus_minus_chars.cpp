#include <iostream>
#include <cstring>

using namespace std;

void printModifiedStr(char input[]);
void printSigns(int number, char symbol);

int main()
{
    const int MAX_LENGTH = 64;
    char inputStr[MAX_LENGTH + 1];

    cout << endl << "Module 4, task 1." << endl << "PLUS-MINUS. Change each odd digit in a text to an equal number of minuses and each even digit to an equal number of pluses." << endl << endl;
    cout << "Please, enter a row, not longer than " << MAX_LENGTH << " symbols: ";
    cin >> inputStr;

    printModifiedStr(inputStr);

    return 0;
}

void printModifiedStr(char input[])
{
    int i = 0;
    while (input[i] != '\0') {
        char symbol = input[i++];
        if (isdigit(symbol)) {
            int number = symbol - '0';
            if (number % 2) {
                printSigns(number, '-');
            }
            else {
                printSigns(number, '+');
            }
        }
        else {
            cout << symbol;
        }
    }
}

void printSigns(int number, char symbol)
{
    while (number--) {
        cout << symbol;
    }
}