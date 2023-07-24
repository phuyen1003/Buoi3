#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    double sum = 0;
    double product = 1;

    for (int i = 1; i <= n; ++i) {
        product *= i;
        sum += product;
    }

   cout << "Tong cua day so la: " << sum << endl;

    return 0;
}
