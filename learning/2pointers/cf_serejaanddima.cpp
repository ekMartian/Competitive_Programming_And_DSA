#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> cards;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        cards.push_back(a);
    }
    int i = 0;
    int j = n - 1;
    int count = n;
    int ticker = 1;
    int sereja = 0;
    int dima = 0;
    while (count > 0)
    {
        if (ticker == 1)
        {
            if (cards[i] > cards[j])
            {
                sereja+=cards[i];
                i++;
                count--;
                ticker = 0;
            }
            else
            {
                sereja+=cards[j];
                j--;
                count--;
                ticker = 0;
            }
        }
        else
        {
            if (cards[i] > cards[j])
            {
                dima+=cards[i];
                i++;
                count--;
                ticker = 1;
            }
            else
            {
                dima+=cards[j];
                j--;
                count--;
                ticker = 1;
            }
        }




    }
    cout << sereja << " " << dima << endl;
}