#include<iostream>
using namespace std;
#include <conio.h>

int main()
{
    void *ptr;
    int vint = 50;
    float vfl = 51.5;

    ptr =&vint;

    cout<<"Nilai yang di tunjuk oleh ptr: "<<*(int*)ptr<<endl;
    ptr = &vfl;

    cout<<"Nilai yang di tunjuk oleh ptr: "<<*(float*)ptr<<endl;
}