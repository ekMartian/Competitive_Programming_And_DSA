#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int l = n.length();
        int zerocounter = 0;
        bool flagger = false;
        int targer;
        int onecounten = 0;
        bool flaggen = false;
        int targen;
        bool zeroer = false;
        bool onen = false;
        for (int i = l-1; i >= 0; i--)
        {
            if (n[i] == '0' && flagger == false)
            {
                flagger = true;
                // zerocounter = 0;
                zerocounter+=(l-i-1);
                targer = i;
                

            }
            else if (n[i] == '0' && flagger == true)
            {
                zerocounter+=(targer-i-1);
                flagger = false;
                zeroer = true;
                break;
            }
            else if (n[i] == '5' && flagger == true)
            {

                zerocounter+=(targer-i-1);
                flagger = false;
                zeroer = true;
                break;
            }
            
        


        }
        // cout << zerocounter << endl;
        for (int i = l-1; i >= 0; i--)
        {
            if (n[i] == '5' && flaggen == false)
            {
                // onecounten = 0;
                flaggen = true;
                onecounten+=(l-i-1);
                targen = i;
                

            }
            else if (n[i] == '2' && flaggen == true)
            {
                onecounten+=(targen-i-1);
                flaggen = false;
                onen = true;
                break;
            }
            else if (n[i] == '7' && flaggen == true)
            {

                onecounten+=(targen-i-1);
                flaggen = false;
                onen = true;
                break;
            }
            
        


        }
        // cout << zerocounter << endl;
        if (zeroer == true && onen == true)
        {
            cout << min(zerocounter, onecounten) << endl; 
        }
        else if (zeroer == true)
        {
            cout << zerocounter << endl;
        }
        else
        {
            cout << onecounten << endl;
        }
        
    }


}