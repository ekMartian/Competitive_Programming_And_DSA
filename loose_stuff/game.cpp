#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "HELLO AMAY! WELCOME TO THE DUNGEON! CAN YOU BREAK THE CODE AND MAKE IT OUT SUCCESSFULLY?" << endl;
    cout << "LET'S FIND OUT!" << endl;
    cout << "PRESS 1 TO ACCEPT THE CHALLENGE, AND 0 TO ACCEPT DEFEAT.." << endl;
    int p;
    cin >> p;
    if (p == 1)
    {
        cout << "I SEE YOU HAVE ACCEPTED THE CHALLENGE. " << endl << "THERE IS A 3 DIGIT CODE THAT YOU MUST GUESS TO MAKE IT OUT ALIVE. " << endl << "FOR EVERY GUESS YOU MAKE, I WILL TELL YOU HOW MANY DIGITS ARE IN THE CORRECT POSITION, AND HOW MANY DIGITS ARE IN THE NUMBER, BUT IN THE WRONG POSITION. " << endl << "YOU HAVE 10 GUESSES TO GUESS THE CODE, OTHERWISE THE DUNGEON WILL REMAIN LOCKED..." << endl;
        cout << "ALL THE BEST!" << endl;
        
        static std::random_device rd; 
        static std::mt19937 gen(rd()); 
        // Changed range to 3 digits (100 to 999)
        std::uniform_int_distribution<> distr(100, 999); 

        int r = distr(gen);
        string code = to_string(r);
        bool found = false;

        for (int i = 0; i < 10; i++)
        {
            string guess;
            cout << "YOU HAVE " << 10-i << " GUESSES LEFT!" << endl << "WHAT IS YOUR GUESS? :  ";
            cin >> guess;

            // Changed length check to 3
            if (guess.length() != 3) {
                cout << "INVALID INPUT! It must be 3 digits. Try again." << endl;
                i--; 
                continue;
            }

            int in_place = 0;
            int total_matches = 0;
            int in_number = 0;
            int f1[10] = {0}, f2[10] = {0};

            // Changed loop limit to 3
            for (int j = 0; j < 3; j++)
            {
                if (guess[j] == code[j])
                {
                    in_place++;
                }
                f1[code[j] - '0']++;
                f2[guess[j] - '0']++;
            }

            for (int j = 0; j < 10; j++) total_matches += min(f1[j], f2[j]);
            in_number = total_matches - in_place;

            cout << "YOU HAVE " << in_place << " NUMBERS IN THE CORRECT PLACE, AND " << in_number << " NUMBERS IN THE WRONG PLACE (HINT: BUT THEY ARE IN THE CODE SOMEWHERE!)" << endl;
            
            // Changed win condition to 3 in place
            if (in_place == 3)
            {
                cout << "YOU ESCAPED THE DUNGEON! CONGRATULATIONS!" << endl;
                found = true;
                break;
            }
        }
        if (found == false)
        {
            cout << "YOU ARE NOW TRAPPED INSIDE THE DUNGEON. THE CODE WAS " << code << ". HAHAHAHA!!!" << endl;
        }
    }
    else
    {
        cout << "I SEE YOU ARE TOO SCARED TO ACCEPT THE CHALLENGE, HAVE FUN IN THE DUNGEON!" << endl;
    }
    
    // ANSI Escape Codes: \033[1;31m (Bold Red), \033[0m (Reset)
    cout << "\033[1;31m"; 
    cout << "################################################################" << endl;
    cout << "#                                                              #" << endl;
    cout << "#    ____    _    __  __ _____    _____     _______ ____       #" << endl;
    cout << "#   / ___|  / \\  |  \\/  | ____|  / _ \\ \\   / / ____|  _ \\      #" << endl;
    cout << "#  | |  _  / _ \\ | |\\/| |  _|   | | | \\ \\ / /|  _| | |_) |     #" << endl;
    cout << "#  | |_| |/ ___ \\| |  | | |___  | |_| |\\ V / | |___|  _ <      #" << endl;
    cout << "#   \\____/_/   \\_\\_|  |_|_____|  \\___/  \\_/  |_____|_| \\_\\     #" << endl;
    cout << "#                                                              #" << endl;
    cout << "################################################################" << endl;
    cout << "\033[0m"; // Always reset color or your terminal stays red forever



    return 0;
}