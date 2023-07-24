#include <iostream>
using namespace std;
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Nhap vao hai so nguyen duong a va b: ";
    cin >> a >> b;

    int result = UCLN(a, b);
    cout << "Uoc so chung lon nhat cua " << a << " va " << b << " la: " << result << endl;

    return 0;
}
