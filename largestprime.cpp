#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    long long largestPrimeFactor = -1;

    // Remove all factors of 2
    while (n % 2 == 0) {
        largestPrimeFactor = 2;
        n /= 2;
    }

    // Check odd factors
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestPrimeFactor = i;
            n /= i;
        }
    }

    // If remaining number is a prime > 2
    if (n > 2) {
        largestPrimeFactor = n;
    }

    cout << "Largest Prime Factor = " << largestPrimeFactor;

    return 0;
}