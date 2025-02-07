//
//  main.cpp
//  Calculator
//
//  Created by Aryan Tandon on 2/6/25.
//

#include "tools.hpp"

double add(double a, double b){
    return a + b;
}

double subtraction(double a, double b){
    return a - b;
}

double multiplication(double a, double b){
    return a * b;
}

double division(double a, double b){
    if (b != 0)
        return a / b;
    else
        cout << "Error! Division by zero." << endl;
    return 0;
}

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
        case '+': result = add(num1, num2); break;
        case '-': result = subtraction(num1, num2); break;
        case '*': result = multiplication(num1, num2); break;
        case '/': result = division(num1, num2); break;
        default: cout << "Invalid operator!" << endl;
    }
    
    cout << "Result :" << result << endl;
    
    return 0;
}
