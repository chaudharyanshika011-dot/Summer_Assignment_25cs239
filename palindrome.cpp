#include <iostream>
using namespace std;
int main() {
    int num, original, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
     if (original == reverse)
        cout << original << " is a palindrome number.";
    else
        cout << original << " is not a palindrome number.";

    return 0;