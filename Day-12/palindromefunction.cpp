#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << "Palindrome number";
    else
        cout << "Not palindrome";

    return 0;
}