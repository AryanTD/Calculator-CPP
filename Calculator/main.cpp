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
    
    double num1, num2, result;
    int choice;
    
    do{
        cout << "\n==== Simple Calculator ====\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "5. Exit\n";
        cout << "Choose an option (1-5): ";
        cin >> choice;
        
        if (choice == 5) {
            cout << "Exiting Calculator. Goodbye!\n";
            break;  // Exit the loop
        }
        
        cout << "Enter first numbers: ";
        cin >> num1;
        
        cout << "Enter second numbers: ";
        cin >> num2;
        
        switch(choice) {
            case 1: result = add(num1, num2); break;
            case 2: result = subtraction(num1, num2); break;
            case 3: result = multiplication(num1, num2); break;
            case 4: result = division(num1, num2); break;
            default: cout << "Invalid operator!" << endl;
        }
        
        cout << "Result :" << result << endl;
        
    }while(true);
    
    return 0;
}
