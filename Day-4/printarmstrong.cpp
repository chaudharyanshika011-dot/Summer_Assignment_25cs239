#include <iostream>
using namespace std;

int main() {
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;

    cout << "Armstrong numbers in range: ";

    for (int num = start; num <= end; num++) {
        int original = num, sum = 0, temp = num;

        // calculate number of digits
        int digits = 0;
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }

        temp = num;

        // calculate Armstrong sum
        while (temp != 0) {
            int rem = temp % 10;

            int power = 1;
            for (int i = 1; i <= digits; i++) {
                power *= rem;
            }

            sum += power;
            temp = temp / 10;
        }

        if (sum == original) {
            cout << original << " ";
        }
    }

    return 0;
}