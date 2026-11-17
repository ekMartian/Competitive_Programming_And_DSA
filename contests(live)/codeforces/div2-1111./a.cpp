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
        vector <int> arr;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            sum+=a;
        }
        if (n % 2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int now = 1;
            for (int i = 0; i < n-1; i++)
            {
                if (arr[i] == now)
                {
                    now*=-1;
                    continue;
                }
                else
                {
                    arr[i]*=-1;
                    arr[i+1]*=-1;
                    now*=-1;
                }
            }
            if (arr[n-1] == -1)
            {
                cout <<"YES" << endl;
            }
            



            else
            {
                cout <<"NO" << endl;
            }
        }

    }
}