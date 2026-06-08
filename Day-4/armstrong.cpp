#include <iostream>
using namespace std;

int main() {
    int num, original, remainder, result = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;  // cube of digit
        num = num / 10;
    }

    if (result == original)
        cout << original << " is an Armstrong number.";
    else
        cout << original << " is not an Armstrong number.";

    return 0;
}