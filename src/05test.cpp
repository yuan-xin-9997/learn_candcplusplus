#include <iomanip>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    cout << setprecision(4);
    cout << "int " << 45 << " and float " << setw(5) << 3.1416;
    cout << endl;
    return 0;
}
