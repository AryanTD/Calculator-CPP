//
//  main.cpp
//  Calculator
//
//  Created by Aryan Tandon on 2/6/25.
//

#include "tools.hpp"

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error! Division by zero.\n";
        return 0;
    }
    return a / b;
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double num) {
    if (num < 0) {
        cout << "Error! Cannot compute square root of a negative number.\n";
        return 0;
    }
    return sqrt(num);
}

double getValidNumber() {
    double num;
    while (true) {
        cin >> num;
        if (cin.fail()) { // Check if input failed
            cout << "Invalid input! Please enter a valid number: ";
            cin.clear(); // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore incorrect input
        } else {
            return num;
        }
    }
}

// Function to get a valid menu choice
int getValidChoice() {
    int choice;
    while (true) {
        cin >> choice;
        if (cin.fail() || choice < 1 || choice > 8) {
            cout << "Invalid choice! Enter a number between 1 and 8: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return choice;
        }
    }
}

int main() {
    int choice;
    double num1, num2, result;

    do {
        cout << "\n==== Advanced Calculator ====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exponentiation (^)\n";
        cout << "6. Square Root (√)\n";
        cout << "7. Trigonometric Functions (sin, cos, tan)\n";
        cout << "8. Exit\n";
        cout << "Choose an option (1-8): ";
        
        choice = getValidChoice();

        if (choice == 8) {
            cout << "Exiting Calculator. Goodbye!\n";
            break;
        }

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            num1 = getValidNumber();
            cout << "Enter second number: ";
            num2 = getValidNumber();
        } else if (choice == 6) {
            cout << "Enter a number: ";
            num1 = getValidNumber();
            result = squareRoot(num1);
            cout << "Result: " << result << endl;
            continue;
        } else if (choice == 7) {
            cout << "Enter an angle in degrees: ";
            num1 = getValidNumber();
            double radians = num1 * M_PI / 180; // Convert degrees to radians
            cout << "sin(" << num1 << ") = " << sin(radians) << endl;
            cout << "cos(" << num1 << ") = " << cos(radians) << endl;
            cout << "tan(" << num1 << ") = " << tan(radians) << endl;
            continue;
        } else {
            cout << "Invalid option! Try again.\n";
            continue;
        }

        switch(choice) {
            case 1: result = add(num1, num2); break;
            case 2: result = subtract(num1, num2); break;
            case 3: result = multiply(num1, num2); break;
            case 4: result = divide(num1, num2); break;
            case 5: result = power(num1, num2); break;
            default: cout << "Invalid choice!\n"; continue;
        }

        cout << "Result: " << result << endl;

    } while (true);

    return 0;
}
