#include <iostream>
using namespace std;

// 传值
int fun(int x){
    x = x + 2;
    cout << x << endl;
    return x;
}


// 传引用/传址
int fun1(int& x){
    x = x + 2;
    cout << x << endl;
    return x;
}

int main(int argc, char const *argv[])
{
    /* code */
    int x = 3;
    fun(x);
    cout << x << endl;

    fun1(x);
    cout << x;

    return 0;
}
