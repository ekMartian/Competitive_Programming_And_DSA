#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        int counter = 0;
        while (n % 6 == 0)
        {
            n = n / 6;
            counter++;
        }
        if (n % 3 == 0)
        {
            while (n % 6 != 0)
            {
                n = n * 2;
                counter++;
            }
            while (n % 6 == 0)
            {   
                n = n / 6;
                counter++;
            }
            if (n == 1)
            {
                cout << counter << endl;
            }
            else
            {
                cout << -1 << endl;
            }

        }
        else if (n == 1)
        {
            cout << counter << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
        

    
    }
}