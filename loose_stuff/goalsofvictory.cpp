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
        // vector <int> numbers;
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            int a;
            cin >> a;
            sum+=a;
        }
        cout << -1*sum << endl;
    }
    
}
// )
// {
//     /* code */
// }
