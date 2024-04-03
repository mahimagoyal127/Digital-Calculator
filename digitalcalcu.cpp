#include <iostream>
#include <limits>

// Function to clear input buffer
void clearInputBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Function to perform addition
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function to perform subtraction
template <typename T>
T subtract(T a, T b) {
    return a - b;
}

// Function to perform multiplication
template <typename T>
T multiply(T a, T b) {
    return a * b;
}

// Function to perform division
template <typename T>
double divide(T a, T b) {
    if (b == 0) {
        std::cout << "Error! Division by zero is not allowed." << std::endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

int main() {
    char choice;
    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Addition" << std::endl;
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case '1': {
                int num1, num2;
                std::cout << "Enter two numbers: ";
                if (!(std::cin >> num1 >> num2)) {
                    std::cout << "Invalid input! Please enter numerical values." << std::endl;
                    clearInputBuffer();
                    break;
                }
                std::cout << "Result: " << add(num1, num2) << std::endl;
                break;
            }
            case '2': {
                int num1, num2;
                std::cout << "Enter two numbers: ";
                if (!(std::cin >> num1 >> num2)) {
                    std::cout << "Invalid input! Please enter numerical values." << std::endl;
                    clearInputBuffer();
                    break;
                }
                std::cout << "Result: " << subtract(num1, num2) << std::endl;
                break;
            }
            case '3': {
                long long num1, num2;
                std::cout << "Enter two numbers: ";
                if (!(std::cin >> num1 >> num2)) {
                    std::cout << "Invalid input! Please enter numerical values." << std::endl;
                    clearInputBuffer();
                    break;
                }
                std::cout << "Result: " << multiply(num1, num2) << std::endl;
                break;
            }
            case '4': {
                double num1, num2;
                std::cout << "Enter two numbers: ";
                if (!(std::cin >> num1 >> num2)) {
                    std::cout << "Invalid input! Please enter numerical values." << std::endl;
                    clearInputBuffer();
                    break;
                }
                std::cout << "Result: " << divide(num1, num2) << std::endl;
                break;
            }
            case '5':
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please enter a valid option." << std::endl;
        }
    } while (choice != '5');

    return 0;
}
