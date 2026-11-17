// Note that you do not have to minimize 𝑘
// . If there are multiple solutions, you may output any of them.
// does this mean that it can be done in one certain way for all nmbers? lets find out. (try to.?)


//

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
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        if ((n&1) == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << n << endl;
            cout << 1 << " " << n << endl;
        }
        else
        {
            cout << 4 << endl;
            int firstxor = 0;;
            for (int i = 0; i < n; i++)
            {
                firstxor^=arr[i];

            }
            cout << 1 << " " << n << endl;
            int secondxor = 0;
            for (int i = 0; i < n-1; i++)
            {
                secondxor^=arr[i];
                
            }
            cout << 1 << " " << n-1 << endl;
            
            // int thirdxor = 0;
            arr[n-2]^=arr[n-1];
            cout << n-1 << " " << n << endl;
            // int fourthxor = 0;
            arr[n-2]^=arr[n-1];
            cout << n-1 << " " << n << endl;
        }


        
    }
//     [
//         int n;
//     ]
// }
}
