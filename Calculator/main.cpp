//
//  main.cpp
//  Calculator
//
//  Created by Aryan Tandon on 2/6/25.
//

#include "tools.hpp"

int main(int argc, const char * argv[]) {
    
    double num1, num2;
    char op;
    
    cout << "Enter first numbers: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    
    cout << "Enter second numbers: ";
    cin >> num2;
    
    double result;
    
    switch(op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0)
                cout << "Result: " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;
        default: cout << "Invalid operator!" << endl;
    }
    
    return 0;
}
