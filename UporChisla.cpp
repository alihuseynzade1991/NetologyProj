#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int temp = a;
    a = (a < b ? b : a);
    b = (temp < b ? temp : b);

    temp = a;
    a = (a < c ? c : a);
    c = (temp < c ? temp : c);

    temp = b;
    b = (b < c ? c : b);
    c = (temp < c ? temp : c);

    cout << a << " " << b << " " << c;

    return 0;
}