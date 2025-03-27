#include <iostream>

// Macro to compute the square of a number
#define SQUARE(x) ((x) * (x))

int main() {
    int num;
    
    // Prompt the user for input
    std::cout << "Enter an integer: ";
    std::cin >> num;
    
    // Compute and display the square using the macro
    std::cout << "The square of " << num << " is: " << SQUARE(num) << std::endl;
    
    return 0;
}
