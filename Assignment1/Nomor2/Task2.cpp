#include <iostream>
using namespace std;

int main() {
    // Equivalent to the 'section .data' in assembly
    short num1 = 5;
    short num2 = 10;
    short result = 0;

    // Equivalent to the computation in the 'section .text'
    result = num1 * num2;

    cout << "Result: " << result << endl;

    // The program will automatically exit here, equivalent to the exit code in assembly

    return 0;
}
