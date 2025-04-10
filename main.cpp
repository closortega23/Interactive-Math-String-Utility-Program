#include <iostream>
#include <string>
using namespace std;

void factorialCalculator();
void numberPyramid();
void sumEvenOrOdd();
void reverseString();

int main() {
    int choice;

    do {
        cout << "========= Interactive Utility Program =========" << endl;
        cout << "1. Factorial Calculator" << endl;
        cout << "2. Number Pyramid" << endl;
        cout << "3. Sum of Even or Odd Numbers" << endl;
        cout << "4. Reverse a String" << endl;
        cout << "5. Exit Program" << endl;
        cout << "==============================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                factorialCalculator();
                break;
            case 2:
                numberPyramid();
                break;
            case 3:
                sumEvenOrOdd();
                break;
            case 4:
                reverseString();
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}

void factorialCalculator() {
    int n;
    unsigned long long factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return;
    }

    int i = 1;
    while (i <= n) {
        factorial *= i;
        i++;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;
}

void numberPyramid() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
}

void sumEvenOrOdd() {
    char choice;
    int limit, sum = 0;

    cout << "Choose (E)ven or (O)dd sum: ";
    cin >> choice;

    cout << "Enter upper limit: ";
    cin >> limit;

    int i = 1;
    do {
        if ((choice == 'E' || choice == 'e') && i % 2 == 0)
            sum += i;
        else if ((choice == 'O' || choice == 'o') && i % 2 != 0)
            sum += i;
        i++;
    } while (i <= limit);

    if (choice == 'E' || choice == 'e')
        cout << "Sum of even numbers up to " << limit << ": " << sum << endl;
    else
        cout << "Sum of odd numbers up to " << limit << ": " << sum << endl;
}

void reverseString() {
    string input, reversed;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, input);

    int i = input.length() - 1;
    while (i >= 0) {
        reversed += input[i];
        i--;
    }

    cout << "Reversed string: " << reversed << endl;
}