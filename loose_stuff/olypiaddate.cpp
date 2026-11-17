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
        int onecount = 1;
        int zerocount = 3;
        int threecount = 1;
        int twocount = 2;
        int fivecount = 1;
        vector <int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            int a = arr[i];
            if (a == 0 && zerocount > 0)
            {
                zerocount--;
            }
            else if (a == 1 && onecount > 0)
            {
                onecount--;
            }
            else if (a == 2 && twocount > 0)
            {
                twocount--;
            }
            else if (a == 3 && threecount > 0)
            {
                threecount--;
            }
            else if (a == 5 && fivecount > 0)
            {
                fivecount--;
            }
            // cout << i << endl;
            if (onecount == 0 && zerocount == 0 && twocount == 0 && threecount == 0 && fivecount == 0)
        

            {
                // cout << " entered" << endl;
                cout << i+1 << endl;
                flag = true;
                break;
            }
            // cout << zerocount << onecount << twocount << threecount << fivecount << endl;
            // cout << "crossing into next i" << endl;
        }
            

        
        if (flag == false)
        {
            // cout << "entered this " << endl;
            cout << 0 << endl;
        }
    
}

    // [
    //     {

    //     }
        


    // ]
}