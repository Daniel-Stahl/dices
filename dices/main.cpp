// Project Dices

#include <iostream>
using namespace std;

int main() {
 //program a dice roll and see how many times each number comes up and add them to an array.

    int diceType;
    char answer;
    int diceRoll;
    int diceArray[] = {1, 2, 3, 4, 5, 6};
    int diceCounter[] = {0, 0, 0, 0, 0, 0};
    int diceCount = 0;

    do {
        cout << "Which dice do you want to roll? 3, 4, 6, 8, 10, 12, 24: ";
        cin >> diceType;

        switch (diceType) {
            case 6:
                diceRoll = rand() % 6 + 1;
                cout << diceRoll << endl;
                break;
            case 24:

            default:
                break;
        }

//Add how mnay times that dice number rolled
        for (int index = 0; index < 6; index++) {
            if (diceRoll == diceArray[index]) {
                diceCounter[index] += 1;
            }
        }

        diceCount++;
        cout << "Want to roll again? (Y/N): ";
        cin >> answer;
    } while (answer != 'N' && answer != 'n');

//    for (int x = 0; x < 6; x++) {
//        cout << "Dice number " << x + 1 << " rolled " << diceCounter[x] << " times" << endl;
//    }

    return 0;
    
}
