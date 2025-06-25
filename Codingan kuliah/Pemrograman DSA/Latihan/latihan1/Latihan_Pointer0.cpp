#include<iostream>
 using namespace std;

 int main()
 {
    int *pc, C;

    C = 5;
    cout << "Address od C (&C) : " << &C << endl;
    cout << "Value of C (C) : " << C << endl << endl;

    pc = &C;
    cout << "Address that pointer pc hold (pc) : " << pc << endl;
    cout << "Contest of the Address pointer pc holds (*pc) : " << *pc << endl << endl;

    C = 11;
    cout << "Address pointer pc holds (pc) : " << pc << endl;
    cout << "Content of the Address pointer pc holds (*pc) : " << *pc << endl << endl;
    
    *pc = 2;
    cout << "Address of C (&C) : " << &C << endl;
    cout << "Value  of C (C) : " << C << endl << endl;

    return 0;
 }