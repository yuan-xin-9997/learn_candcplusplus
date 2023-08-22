#include <iostream>
using namespace std;
int main()
{
        int A = 15, B = 38, *C = &A;
        cout << endl;
        cout << &A << " " << A << endl;
        cout << &B << " " << B << endl;
        cout << &C << " " << C << " " << *C << endl;
        A = 49;
        cout << endl;
        cout << &A << " " << A << endl;
        cout << &B << " " << B << endl;
        cout << &C << " " << C << " " << *C << endl;
        C = &B;
        cout << endl;
        cout << &A << " " << A << endl;
        cout << &B << " " << B << endl;
        cout << &C << " " << C << " " << *C << endl;
        return 0;
}