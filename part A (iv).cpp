#include <iostream>

// (iv) Control Statements

void demonstrateControlStatements() {
    int x = 10;

    // If-else statement
    if (x > 5) {
        std::cout << "x is greater than 5" << std::endl;
    } else {
        std::cout << "x is not greater than 5" << std::endl;
    }

    // Switch-case statement
    switch (x) {
        case 5:
            std::cout << "x is 5" << std::endl;
            break;
        case 10:
            std::cout << "x is 10" << std::endl;
            break;
        default:
            std::cout << "x is neither 5 nor 10" << std::endl;
    }

    // Ternary operator
    std::string result = (x > 5) ? "greater than 5" : "not greater than 5";
    std::cout << "x is " << result << std::endl;
}

int main() {
    std::cout << "\nControl statements example:" << std::endl;
    demonstrateControlStatements();

    return 0;
}
