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
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            b.push_back(a);
        }
        sort(b.begin(), b.end());
        bool flag = false;
        for (int i = 1; i < n; i++)
        {
            if (b[i] == b[i-1])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

cancelation logic, check notebook (like, the eam sheet, i will stoe it aeuflly, so you and can look at it to, and i mean you, yes you, my bro)
//(sift through eveyrhitng, you will find it. something amazing. )