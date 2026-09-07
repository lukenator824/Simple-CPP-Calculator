#include <iostream>

int main() {
    int num1;
    int num2;

    int choice; 

    std::cout << "Enter first number (make sure the order is correct!): " << std::endl;
    std::cin >> num1;

    std::cout << "Enter second number (make sure the order is correct!): " << std::endl;
    std::cin >> num2;

    std::cout << "Enter a choice (1 for addition, 2 for subtraction): " << std::endl;
    std::cin >> choice;


    if (choice == 1) {
        std::cout << "The sum is: " << num1 + num2 << std::endl;
    } else if (choice == 2) {
        std::cout << "The difference is: " << num1 - num2 << std::endl;
    } else {
        std::cout << "Invalid choice!" << std::endl;
        return 0;
    } 

    std::cout << "Hope you enjoyed my calculator!" << std::endl;
    return 0;
}