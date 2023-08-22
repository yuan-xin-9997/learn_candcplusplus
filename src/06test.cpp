#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    ifstream InStream;
    string line;
    InStream.open("01test.c");
    while (getline(InStream, line)){
        cout << line << endl;
    }
    return 0;
}
