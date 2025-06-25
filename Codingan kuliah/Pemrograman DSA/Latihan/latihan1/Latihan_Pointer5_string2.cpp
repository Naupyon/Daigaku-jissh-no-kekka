#include <iostream>
using namespace std;

int main()
{
    const char *Nama1 = "HANAKO";
    const char *Nama2 = "NENE YASHIRO";
    const char *Namax;

    cout << "semula : " << endl;
    cout << "Nama1 --> " << Nama1 << endl;
    cout << "Nama2 --> " << Nama2 << endl;

    Namax = Nama1;
    Nama1 = Nama2;
    Nama2 = Namax;

    cout << "kini : " << endl;
    cout << "Nama1 --> " << Nama1 << endl;
    cout << "Nama2 --> " << Nama2 << endl;

    return 0;

}