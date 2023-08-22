#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int x = 3;
    // bool res = (5 < x < 10);
    bool res = ((5 < x) && (x < 10));
    cout << res;
    return 0;
    
}

