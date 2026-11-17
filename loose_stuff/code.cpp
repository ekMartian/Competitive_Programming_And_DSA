#include <bits/stdc++.h>
#include <random>
using namespace std;

int main()
{
    cout << "Hello Amay! Welcome to the CodeQuest!" << endl;
    cout << "Press 1 to continue..." << endl;
    int n;
    cin >> n;
    int c;
    c = 4;
    vector <int> code;
    if (n == 1)
    {
        cout << "So you have chosen a challenging path...." << endl;
        cout << "You will be presented with a " << c << " digit code...you have to crack it within 6 tries." << endl << "If you succeed, you have entered the safe, or else the safe will explode!" << endl;
        // int n = 4; // Number of digits for the code

    // 1. Seed the generator with a non-deterministic random device
    std::random_device rd;
    std::mt19937 gen(rd());

    // 2. Define the range for a single digit (0-9)
    std::uniform_int_distribution<> digit_dist(0, 9);
        for (int i = 0; i < c; ++i) {
            code.push_back(digit_dist(gen));
        // 3. Generate each digit individually to allow leading zeros
        // std::cout << digit_dist(gen);
        for (int i = 0; i < 6; i++)
        {
            cout << "Guess the code: ";
            vector <int> guess;
            for (int i = 0; i < c; i++)
            {
                int a;
                cin >> a;
                guess.push_back(a);
            }
            
            int a;
            cin >> a;
            for (int j = 0; j < c; j++)
            {
                if (a == code[i])
            }
        }
    }

    }
    else
    {
        return 0;
    }
}