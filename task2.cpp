#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function to convert string to uppercase
void toUpperCase(string &str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}

// Function to count vowels in the string
int countVowels(const string &str) {
    int count = 0;
    string vowels = "AEIOU";
    
    for (char ch : str) {
        if (vowels.find(toupper(ch)) != string::npos) {
            count++;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(const string &str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

int main() {
    string input;
    
    // Taking user input
    cout << "Enter a string: ";
    getline(cin, input);

    // Convert to uppercase
    toUpperCase(input);
    cout << "Uppercase: " << input << endl;

    // Count vowels
    int vowelCount = countVowels(input);
    cout << "Number of vowels: " << vowelCount << endl;

    // Reverse string
    string reversedStr = reverseString(input);
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}
