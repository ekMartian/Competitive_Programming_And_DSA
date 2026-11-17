#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;
        if (m < k)
        {
            cout << "No" << endl;
        }
        else
        {
            cout <<"yes"<<endl;
            int sum = 0;
            for (int i = 0; i < k-1; i++)
            {
                cout << 1 << " ";
                sum++;
            }

            cout << m-sum << " ";
            for (int i = 0; i < n-k; i++)
            {
                cout << m+1 << " ";
            }
            
                cout << endl;
        }
    }
}