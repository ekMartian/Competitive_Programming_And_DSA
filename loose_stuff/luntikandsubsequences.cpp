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
        long long int counter = 0;
        long long int othercounter = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
            
            if (a == 0)
            {
                counter++;
            }
            else if (a == 1)
            {
                othercounter++;
            }
        }
        long long int result = static_cast<long long int>(pow(static_cast<double>(2), static_cast<double>(counter)));
        cout << othercounter*result << endl;
    }
}//static cast:also check how it works 
