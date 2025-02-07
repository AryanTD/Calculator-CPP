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
        cin >> choice;

        if (choice == 8) {
            cout << "Exiting Calculator. Goodbye!\n";
            break;
        }

        if (choice >= 1 && choice <= 5) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        } else if (choice == 6) {
            cout << "Enter a number: ";
            cin >> num1;
            result = squareRoot(num1);
            cout << "Result: " << result << endl;
            continue;
        } else if (choice == 7) {
            cout << "Enter an angle in degrees: ";
            cin >> num1;
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
