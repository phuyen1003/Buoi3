#include <iostream>
using namespace std;
int main()
{
    int n;
    float s = 0;

    do
    {
      cout << "Nhap vao so nguyen duong n : ";
       cin >> n;
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        s += 1.0 / (2 * i);
    }

    cout << "Tong S(" << n << ") = " << s << endl;
    return 0;
}
