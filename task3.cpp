#include <iostream>
#include <cstdint>

#define LIMIT 50  // Defining a macro for the upper limit

using namespace std;

int main() {
    // Loop to print even numbers from 1 to LIMIT
    for (uint8_t i = 2; i <= LIMIT; i += 2) {
        cout << static_cast<int>(i) << " ";  // Cast to int for proper output
    }
    return 0;
}
