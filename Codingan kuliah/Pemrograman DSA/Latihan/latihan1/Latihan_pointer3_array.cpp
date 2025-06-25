#include<iostream>
using namespace std;

int main()
{
    static int Tgl_lahir[] ={27, 7, 2005};
    int *a;
    a = Tgl_lahir;

    cout <<"Nilai yang di tunjuk oleh a: " << *a << endl;
    cout <<"Nilai dari Tgl_lahir[0] = " << Tgl_lahir[0] << endl;

    return 0;
}