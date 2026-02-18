#include <iostream>
using namespace std;

bool isPrime(int num) {
    // A prime number is greater than 1 and only divisible by 1 and itself
    if (num <= 1) {
        return false;
    }

    // Check divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // num is divisible by i, so it's not prime
        }
    }

    return true; // num is prime
}

int main() {
    int number;
    
    // Input the number
    cout << "Enter a number: ";
    cin >> number;
    
    // Check if the number is prime or not
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
