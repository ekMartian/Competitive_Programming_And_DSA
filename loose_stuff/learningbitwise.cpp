#include <bits/stdc++.h>
using namespace std;

int main()
{
    //a = 5 (00000101 in 8-bit binary)
    //b = 9 (00001001 in 8-bit binary)


    unsigned int a = 5, b = 9;

    cout << (a & b) << endl;

    cout << (a | b) << endl;

    cout << (a ^ b) << endl;

    cout << (~a) << endl;

    cout << (b<<1) << endl;
    
    cout << (b>>1) << endl;

    cout << (~4) << endl;

    unsigned int i = 4;
    
    cout << (~i) << endl;

    cout << format("{032b}", i) << endl;

}