#include <iostream>

using namespace std;

int main() {
    int num, reversedNum = 0;
    
    // Asking for input, saving in num
    cout << "Enter a number: ";
    cin >> num;
    
    for (; num > 0; num /= 10) {
        int digit = num % 10;       // Loop for reversing
        reversedNum = reversedNum * 10 + digit;
    }
    
    cout << "Reversed Number: " << reversedNum << endl;
    
    return 0;
}
