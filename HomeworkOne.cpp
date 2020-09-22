#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int GetUserChoice();
int GetComputerChoice();
bool DetermineWinner(int userChoice, int compChoice);
void DisplayChoice(int choice);

/*

Traditional Rock Paper game, user plays against the computer.
Driver file.

*/
int main() {

    int HumanChoice;
    int ComputerChoice;

    HumanChoice = GetUserChoice();
    ComputerChoice = GetComputerChoice();
    DetermineWinner(HumanChoice, ComputerChoice);

    return 0;
}

/*

Gets the choice the user wants for the game.
Return : Returns an int which is the selected weapon for battle.

*/
int GetUserChoice() {
    int rock = 1;
    int paper = 2;
    int scissors = 3;
    int choice = 0;

    cout << "Select 1 for Rock\n" << "Select 2 for Paper\n" << "Select 3 for Scissors\n" << endl;
    cin >> choice;

    return choice;
}

/*

Getter for randomly generated choice for the computer.
Return : Returns the int which will be the computer's weapon.

*/
int GetComputerChoice() {
    srand(time(0));
    int choice;

    choice = (rand() % 3) +1;
    return choice;
}

/*

Tells the user whether or not there is a winner from the game.
Return : Returns a boolean true if there is a winner, false if not.
Param : userChoice int - the weapon for the user.
Param : compChoice int - the weapon for the computer.

*/
bool DetermineWinner(int userChoice, int compChoice) {
    if (userChoice != compChoice) {

        if ((userChoice == 1 && compChoice == 3)) {
            cout << "You beat the computer" << endl;
            return true;
        }
        else if ((userChoice == 2 && compChoice == 1)) {
            cout << "You beat the computer" << endl;
            return true;
        }
        else if ((userChoice == 3 && compChoice == 2)) {
            cout << "You beat the computer" << endl;
            return true;
        }
        else if ((compChoice == 1 && userChoice == 3)) {
            cout << "The computer beat you" << endl;
            return true;
        }
        else if ((compChoice == 2 && userChoice == 1)) {
            cout << "The computer beat you" << endl;
            return true;
        }
        else if ((compChoice == 3 && userChoice == 2)) {
            cout << "The computer beat you" << endl;
            return true;
        }
    else {
        cout << "There was a tie" << endl;
        return false;
        }
    }
    return false;
}

/*

Function to show which weapon the user and computer have
Param : choice int - the weapons for the game.

*/
void DisplayChoice(int choice) {
    if (choice == 1)
}
