#include <iostream>

int main() {
    int num1;
    int num2;

    int choice; 

    std::cout << "Enter first number (make sure the order is correct!): " << std::endl;
    std::cin >> num1;

    std::cout << "Enter second number (make sure the order is correct!): " << std::endl;
    std::cin >> num2;

    std::cout << "Enter a choice (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): " << std::endl;
    std::cin >> choice;


    switch (choice) {
        case 1:
            std::cout << "The sum is: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "The difference is: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "The product is: " << num1 * num2 << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                std::cout << "The quotient is: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed!" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
    }

    std::cout << "Hope you enjoyed my calculator!" << std::endl;
    return 0;
}