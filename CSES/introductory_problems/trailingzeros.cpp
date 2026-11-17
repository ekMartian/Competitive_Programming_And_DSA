#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n % 10 == 0)
    {
        count++;
        n/=10;
    }
    while (n % 5 == 0)
    {
        count++;
        n/=5;
    }
    while (n % 2 == 0)
    {
        count++;
        n/=2;
    }
    cout << count << endl;
}