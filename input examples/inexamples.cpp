#include <iostream>
using namespace std;

int main() {
    int number1, number2;

    cout << "Enter 2 integers";

    cout << "Enter your first integer: ";
    cin >> number1;

    cout << "Enter your second integer: ";
    cin >> number2;

    cout << "The sum of " << number1 << " + " << number2 << " = " << number1+number2 << ".";
    
    return 0;
}