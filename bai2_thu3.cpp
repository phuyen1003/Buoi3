#include <iostream>
using namespace std;
// Đếm số lượng chữ số của số n
int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Tính tổng các chữ số của số n
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Tính tổng các chữ số lẻ của số n
int sumOfOddDigits(int n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 != 0) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

// Tính tổng các chữ số chẵn của số n
int sumOfEvenDigits(int n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        n /= 10;
    }
    return sum;
}

// Tìm số đảo của số n
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    cout << "So luong chu so cua " << n << " la: " << countDigits(n) << std::endl;
    cout << "Tong cac chu so cua " << n << " la: " << sumOfDigits(n) << std::endl;
    cout << "Tong cac chu so le cua " << n << " la: " << sumOfOddDigits(n) << std::endl;
    cout << "Tong cac chu so chan cua " << n << " la: " << sumOfEvenDigits(n) << std::endl;
    cout << "So dao cua " << n << " la: " << reverseNumber(n) << std::endl;

    return 0;
}
