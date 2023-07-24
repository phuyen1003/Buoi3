#include <iostream>
using namespace std;
bool ktraSNT(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int N;
    cout << "Nhap vao mot so nguyen N (< 100): ";
    cin >> N;

    cout << "Cac so nguyen to nho hon " << N << " la: ";

    for (int i = 2; i < N; ++i) {
        if (ktraSNT(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
