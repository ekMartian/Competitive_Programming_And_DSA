#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1 2 1 1 2 1 2 2 
    // 2 1 2 2 1 2 1 1 
    // 1 1 2 1 2 2 1 2 
    // 2 2 1 2 1 1 2 1 
    // 1 1 2 1 2 3 3 2 2 3 1 3 
    // 1 2 1 1 2 2 1 2 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n & 1) == 0)
        {
            int a = 1;
            int b = 2;
            for (int i = 0; i < n; i += 2)
            {
                cout << a << " " << b << " " << a << " " << a << " " << b << " " << b << " " << a << " " << b << " ";
                a+=2;
                b+=2;
            }
            cout << endl;
        }
        else
        {
            cout << "1 1 2 1 2 3 3 2 2 3 1 3 ";
            int a = 4; 
            int b = 5;
            for (int i = 3; i < n; i += 2)
            {
                cout << a << " " << b << " " << a << " " << a << " " << b << " " << b << " " << a << " " << b << " ";
                a+=2;
                b+=2;
            }
            cout << endl;
        }
    }

}