#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;  // cube of digit
        n /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong number";
    else
        cout << "Not Armstrong number";

    return 0;
}