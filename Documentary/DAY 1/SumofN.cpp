#include <iostream>
using namespace std;

int main() {
    int N, sum;

    // Ask the user for input
    cout << "Enter a positive integer N: ";
    cin >> N;
    // Initialize sum to 0
    sum = 0;

    // Check if the user entered a valid number
    if (N < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of first N natural numbers using a loop
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    // Output the result
    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;

    return 0;
}