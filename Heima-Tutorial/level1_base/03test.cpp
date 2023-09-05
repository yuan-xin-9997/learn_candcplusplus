#include <iostream>
using namespace std;
int main(){
    int A[2] = {2, 3};
    int B[2];
    for (int i = 0; i < 2; i++)
    {
        /* code */
        B[i] = A[i];
    }
    B[0] = 100;
    for (int i = 0; i < 2; i++)
    {
        /* code */
        cout << "A, B:" << A[i] << "," << B[i] << endl;
    }
    return 0;   
    
}