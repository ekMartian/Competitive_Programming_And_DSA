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
        int target = arr[n-1];
        reverse(arr.begin(), arr.end());
        int remaining = n;
        int current = 0;
        int at = 0;
        int count = 0;
        int doing = pow(2, 0);
        while (remaining >= pow(2, current))
        {
            // bool is = true;
            for (int i = 0; i <= doing; i++)
            {
                if (arr[at+i] != target)
                {

                    count++;
                    break;
                }

                
            }
            // i = doing;
            at = at + doing + 1;

            doing = doing * 2;
            remaining = n - at;
            // at = at + 


        }
        // int stock = 0;
        // int load = 0;
        // bool doing = true;
        // int count = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i] == target && doing == true)
        //     {

        //         stock++;


        //     }
        //     if (arr[i] != target && doing == true)
        //     {
        //         doing = false;
        //         load = 1;

        //     }
        //     else if (arr[i] != target && doing == false)
        //     {
        //         load++;
        //     }
        //     else if ((arr[i] == target && doing == false) || i == n-1 )
        //     {
        //         stock = i+1;
        //         count
        //     }
            
        // }
    }
}
//somethign has to be changed in these type of quesiotns. anything that cant be changed at all???
// the last lemnt in this case.
//dont know if thts thr eexact requiered train of thought though.

// if (same)
// pseudocoding firstm can heklp
// \
// pseudocoding first, can help.