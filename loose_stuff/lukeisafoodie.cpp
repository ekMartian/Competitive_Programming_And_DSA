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
        int winners = n;
        int losers = 0;
        int counter = 0;
        while (winners != 1 || losers != 1)
        {
            int toadd;
            if (winners % 2 == 0)
            {
                winners/=2;
                toadd = winners;
                counter+=winners;

            }
            else if (winners % 2 != 0)
            {
                winners/=2;
                int retainer = winners;
                winners++;
                toadd = retainer;
                counter+=retainer;
            }
            if (losers % 2 == 0)
            {
                losers/=2;
                counter+=losers;
                losers+=toadd;
        
            }
            else if (losers % 2 != 0)
            {
                losers/=2;
                counter+=losers;
                losers++;
                losers+=toadd;

            }
            // counter++;
        }
        cout << counter + 1 << endl;
        // if (n == 2)
        // {
        //     cout << 2 << endl;
        // }
        // else if (n%2 == 0)
        // {
        //     cout << n/2 + 2 << endl;
        // }
        // else
        // {
        //     cout << n/2 + 3 << endl;
        // }
    }
}//what is being askeed??
// am i poutputting the right thing??
// mathces played. here, not roudns
// read the quesiton agaun< EVEYRITN STEP BY STEP KYA SE KYA, KHYA SE KYA - EXPLAIN THIS TO BRO AS WELL. 