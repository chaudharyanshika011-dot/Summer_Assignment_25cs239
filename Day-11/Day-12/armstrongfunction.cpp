#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;

    // count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // calculate sum of powers
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;

        for (int i = 0; i < digits; i++) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;

    if (isArmstrong(n))
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong Number";

    return 0;
}