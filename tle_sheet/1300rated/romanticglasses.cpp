// aray sums, prefix sums

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
        vector <long long int> arr;
        for (int i = 0; i < n; i++)
        {
            long long int a;
            cin >> a;
            arr.push_back(pow(-1, i) * a);
        }
        //ajisji
        vector <long long int> prefix_sums;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
            prefix_sums.push_back(sum);
        }
        bool flag = false;
        set <long long int> sums;
        sums.insert(0); for (int i = 0; i < n; i++)
        {
            //long long int here = packaged_task
            //for 
            long long int here = prefix_sums[i];
            if (sums.find(here) == sums.end())
            {
                sums.insert(here);
                continue;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if (flag == false) cout <<"NO" << endl;
        else

        {
            cout << "YES" << endl;
        }



    }
}