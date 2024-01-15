#include <iostream>
#include <cstring>

using namespace std;

void calculateBalances(string input);
int countBalance(char symbol, char opening, char closing);
void printBracketBalances(int roundBalance, int squareBalance, int curlyBalance, int angleBalance);
void printBalance(int balance);

int main()
{
    string code = "for (int i = 0; i < arr_length; i++) { cout << arr[i]; }}";

    cout << endl << "Module 4, task 2." << endl << "BALANCE. Check the bracket balance in a code." << endl << endl;
    calculateBalances(code);

    return 0;
}

void calculateBalances(string input)
{
    int roundBalance = 0;
    int squareBalance = 0;
    int curlyBalance = 0;
    int angleBalance = 0;
    for (char character : input) {
        roundBalance += countBalance(character, '(', ')');
        squareBalance += countBalance(character, '[', ']');
        curlyBalance += countBalance(character, '{', '}');
        angleBalance += countBalance(character, '<', '>');
    }

    cout << "Input: " << input;
    printBracketBalances(roundBalance, squareBalance, curlyBalance, angleBalance);
}

int countBalance(char symbol, char opening, char closing)
{
    return (symbol == opening) ? 1 : (symbol == closing) ? -1 : 0;
}

void printBracketBalances(int roundBalance, int squareBalance, int curlyBalance, int angleBalance)
{
    cout << endl << "Round brackets: ";
    printBalance(roundBalance);
    cout << endl << "Square brackets: ";
    printBalance(squareBalance);
    cout << endl << "Curly brackets: ";
    printBalance(curlyBalance);
    cout << endl << "Angle brackets: ";
    printBalance(angleBalance);
}

void printBalance(int balance)
{
    cout << ((balance > 0) ? "There are more opening brackets than closing."
        : (balance < 0) ? "There are more closing brackets than opening."
        : "There is the balance of opening and closing brackets.");
}