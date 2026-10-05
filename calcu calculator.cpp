#include <iostream>

int main() {
    double num1, num2, ans;
    char opp;

    std::cout << "====================\n";
    std::cout << "Simple Calculator 🧮\n";
    std::cout << "====================\n\n";

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Select an operator (+, -, *, /): ";
    std::cin >> opp;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    if ( opp == '+'){
        ans = num1 + num2;
        std::cout << "Result: " << ans << std::endl;
    }

    else if ( opp == '-') {
        ans = num1 - num2;
        std::cout << "Result: " << ans << std::endl;
    }

    else if ( opp == '*') {
        ans = num1 * num2;
        std::cout << "Result: " << ans << std::endl;
    }

    else if ( opp == '/') {
        ans = num1 / num2;
        std::cout << "Result: " << ans << std::endl;
    }

    
    return 0;
}