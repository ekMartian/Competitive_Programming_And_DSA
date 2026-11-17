#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int t = 0;
        int l = 0;
        while (l < n)
        {
            l+=x;
            l+=y;
            t++;
        }
        int a = t;
        t = 0;
        int yet = 0; 
        l = 0;
        while (l < n)
        {
            l+=x;
            if (yet < z)
            {
                yet++;
            }
            else
            {
                l+=(10*y);
            }
            t++;
            

        }
        int b = t;
        cout << min(a, b) << endl;
    }
}