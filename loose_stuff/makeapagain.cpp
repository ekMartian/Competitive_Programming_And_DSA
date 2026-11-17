#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int targc = b + (b-a);
        int targb;
        if ((c-a) % 2  == 0)
        {
            targb = a + (c-a)/2;    
        }
        else
        targb = 0;
        
        int targa = b - (c-b);
        // cout << targa << targb << targc << endl;
        if ((targa % a == 0 && targa != 0)|| (targb % b == 0 && targb != 0)|| (targc % c == 0 && targc != 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}