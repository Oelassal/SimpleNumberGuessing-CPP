#include <iostream>
using namespace std;

int main()
{char EndGame = 'N';
    int MyNumber = 150 , playerguess;
    cout << "I have a number between 1 and 100.\nCan you guess my number ??\nPlease type your first guess.\n?" << endl;

    do{
        cin >> playerguess;
    if (playerguess > MyNumber) {
        cout << " Too High. Try again." << endl;

    }

    else if (playerguess == MyNumber) {
        cout << "Excellent ! You Got It ! \n If you want to exit press Y" << endl;
        cin >> EndGame;
        break;

    }
    else {
        cout << " Too Low. Try again." << endl;
    }
    } while (1);
return 0;
}