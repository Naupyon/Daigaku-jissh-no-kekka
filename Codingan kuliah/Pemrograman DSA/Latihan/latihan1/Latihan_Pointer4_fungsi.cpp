#include <iostream>
using namespace std;

void naikan_nilai(int *, int *);

int main() {
    int a = 5, b = 9;
    cout << "SEMULA : a = " << a << ", b = " << b << endl;

    naikan_nilai(&a, &b);
    cout << "KINI : a = " << a << ", b = " << b << endl;
    return 0;
}

void naikan_nilai(int *X, int *Y)
{
    *X = *X + 3;
    *Y = *Y + 3;
}