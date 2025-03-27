#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    cout << "Enter an integer: ";
    cin >> num;
    
    // Ensure num is positive for digit extraction
    num = abs(num);
    
    for (; num > 0; num /= 10) {
        sum += num % 10; // Extract the last digit and add to sum
    }
    
    cout << "Sum of digits: " << sum << endl;
    return 0;
}
