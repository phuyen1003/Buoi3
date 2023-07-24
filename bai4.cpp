#include <iostream>
using namespace std;

int tinhTongCacChuSo(int n) {
    int tong = 0;
    while (n != 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int main() {
    int so;
    cout << "Nhap so nguyen duong N: ";
    cin >> so;

    if (so <= 0) {
        cout << "Vui long nhap mot so nguyen duong." << endl;
        return 1;
    }

    int tongChuSo = tinhTongCacChuSo(so);

    cout << "Tong cac chu so cua so " << so << " la " << tongChuSo << endl;

    return 0;
}
