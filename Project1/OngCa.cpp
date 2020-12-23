#include <iostream>
using namespace std;

void reverse(long n) {
    int remainder;
    long reversedNumber = 0;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    cout << "Reversed Number: " << reversedNumber;
}
int main() {
    int n;
    cout << "Enter an number: ";
    cin >> n;
    reverse(n);
    return 0;
}