#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int k, x;
        cin >> k >> x;
        vector <long long int> sums;
        vector <long long int> ks;
        for (int i = 0; i < n; i++)
        {
            sums.push_back((i+1)*(i+2)/2);
        }
        ks.push_back(sums[k-1]);
        int count = 1;
        for (int i = 1; i < n-k+1; i++)
        {
            ks.push_back(sums[k+i-1] - sums[i-1]);
            count++;
        }
        bool flag = true;
        for (int i = 0; i < count; i++)
        {
            if (ks[i] == x)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
            else
            {
                flag = false;
                continue;
            }

        }
        if (flag == false)
        {
            cout << "NO" << endl;
        }


    }

}