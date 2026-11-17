#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n, k, x;
        cin >> n >> k >> x;

        if (n == 1 && x != 1)
        {
            cout << "YES" << endl << 1 << endl << 1 << endl;

        }
        else if (n == 1 && x == 1)
        {
            cout << "NO" << endl;
        }
        else if (x != 1 && n != 1)
        {
            cout << "YES" << endl << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else{
            if (n % 2 == 0 && k >= 2)
            {
                cout << "YES" << endl << n/2 << endl;
                for (int i = 0; i < n; i+=2)
                {
                    cout << 2 << " ";
                }
                cout << endl;
            }
            else if (n % 2 == 0 && k < 2)
            {
                cout << "NO" << endl;
            }
            else if (n % 2 == 1 && k >= 2)
            {
                if (k == 2)
                {
                    cout << "NO" << endl;
                }
                if (k >= 3)
                {
                    cout << "YES" << endl << 1+(n-3)/2 << endl;
                    n = n-3;
                    for (int i = 0; i < n; i+=2)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;

                }
                

                
                
            }
            else 
            {
                cout << "NO" << endl;
            }
        }
    }

}