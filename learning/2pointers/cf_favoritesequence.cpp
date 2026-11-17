//names kept as is for the questions, the only thing different is that there is no space included in my file names, so not as is exactly. also listen, don't worry, ask me. trust me. like, fr.
// like, fr. 

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
        vector <int> b;
        vector <int> a;
        for (int i = 0; i < n; i++)
        {
            int bi;
            cin >> bi;
            b.push_back(bi);
        }
        if ((n&1) == 0)
        {
            int i = n/2 - 1;;
            int j = n/2;
            int count = n;
            int ticker = 1;
            while (count > 0)
            {
                if (ticker == 1)
                {
                    a.push_back(b[j]);
                    j++;
                    ticker = 0;
                    count--;
                }
                else
                {
                    a.push_back(b[i]);
                    // cout << b[i] << " ";
                    i--;
                    ticker = 1;
                    count--;
                }
                
            }
            // cout << endl;
        }
        else
        {
            int i = n/2;
            int j = n/2 + 1;
            int count = n;
            int ticker = 0;
            while (count > 0)
            {
                if (ticker == 1)
                {
                    a.push_back(b[j]);
                    // cout << b[j] << " ";
                    j++;
                    ticker = 0;
                    count--;
                }
                else
                {
                    a.push_back(b[i]);
                    // cout << b[i] << " ";
                    i--;
                    ticker = 1;
                    count--;
                }
                
            }
            // cout << endl;
        }
        reverse(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

6 6 6 
3 6 6 
3 4 6
