#include <iostream>
#include <cctype>

#define MIN_LENGTH 8  // Define macro for the minimum password length

// Flags to track character type requirements
bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

// Function to check if a character is a special character
bool isSpecialChar(char ch) {
    std::string specialChars = "!@#$%^&*";  // List of allowed special characters
    return specialChars.find(ch) != std::string::npos; // Check if character exists in the list
}

// Function to check password strength
void checkPasswordStrength(const std::string &password) {
    // Check if password meets minimum length requirement
    if (password.length() < MIN_LENGTH) {
        std::cout << "Weak Password: Too short (must be at least " << MIN_LENGTH << " characters)\n";
        return;
    }

    // Iterate through each character in the password
    for (char ch : password) {
        if (std::isupper(ch)) hasUpper = true;   // Check for uppercase letter
        if (std::islower(ch)) hasLower = true;   // Check for lowercase letter
        if (std::isdigit(ch)) hasDigit = true;   // Check for digit
        if (isSpecialChar(ch)) hasSpecial = true; // Check for special character
    }

    // If all conditions are met, password is strong
    if (hasUpper && hasLower && hasDigit && hasSpecial) {
        std::cout << "Strong Password\n";
    } else {
        // Identify missing criteria and display appropriate message
        std::cout << "Weak Password: Missing ";
        if (!hasUpper) std::cout << "uppercase letter, ";
        if (!hasLower) std::cout << "lowercase letter, ";
        if (!hasDigit) std::cout << "digit, ";
        if (!hasSpecial) std::cout << "special character, ";
        std::cout << "\b\b \n"; // Removes the last comma and space for clean output
    }
}

int main() {
    std::string password;

    // Prompt user to enter a password
    std::cout << "Enter a password: ";
    std::cin >> password;
    
    // Call function to check password strength
    checkPasswordStrength(password);
    
    return 0;
}
