#include <iostream>
#include <string>

// Defining first namespace
namespace MathOperations {
    int add(int a, int b) { // Adds two integers together
        return a + b;
    }
}

// Defining second namespace
namespace TextOperations {
    std::string concat(const std::string& str1, const std::string& str2) {
        return str1 + str2; // Returns two string's concatenation
    }
}

int main() {
    // Using first namespace
    int sum = MathOperations::add(10, 20);
    std::cout << "Sum: " << sum << std::endl;
    
    // Using second namespace
    std::string result = TextOperations::concat("Hello, ", "World!");
    std::cout << "Concatenated String: " << result << std::endl;
    
    return 0;
}
