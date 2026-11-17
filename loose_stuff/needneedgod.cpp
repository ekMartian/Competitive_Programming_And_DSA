#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--
    )
    {
        int n;
        cin >> n;
        int a = 0;
        int b = 0;
        for(int i =0; i < n; i++)
        {
            int l;
            cin >> l;
            if (l ==1 )
            {
                a++;
            }
            else
            {
                b++;
            }
            

        }
        if (n%2 == 0)
        {
            if (a >= n/2)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << n/2
            }
        }

        if (a >= b && a%2 == 0)
            {
                cout << 0 << endl;
            }
            else if (a >= b && a%2 != 0)
            {
                cout << 1 << endl;
            }
            else if (a < b && b%2 == 0)
            {

                cout << b-a << endl;
            }
            else
            {
                cout << b-a+1 << endl;
            }
    }
}