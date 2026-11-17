#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int b = 1;
    int operations = 0;
    b++;
    b++;
    operations++;
    operations++;
    while (n >= b)
    {
        operations++;
        n/=b;
        cout << n <<  endl;
        // cout << n / b << endl;
        // n /= b;
    }
    cout << operations+1 << endl;
}