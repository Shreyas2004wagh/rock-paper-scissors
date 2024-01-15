#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

// Function to get the computer's choice
int getComputerChoice() {
    return rand() % 3; 
}
void printUserChoice(int choice) {
    switch (choice) {
        case 0:
            cout << "You chose rock." << endl;
            break;
        case 1:
            cout << "You chose paper." << endl;
            break;
        case 2:
            cout << "You chose scissors." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }
}

void ComputerChoice(int choice) {
    switch (choice) {
        case 0:
            cout << "Computer chose rock." << endl;
            break;
        case 1:
            cout << "Computer chose paper." << endl;
            break;
        case 2:
            cout << "Computer chose scissors." << endl;
            break;
    }
}

void winner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    srand(time(0));
    cout << "Enter your choice (0 for rock, 1 for paper, 2 for scissors): ";

    int userChoice;
    cin >> userChoice;

    if (userChoice < 0 || userChoice > 2) {
        cout << "Please enter 0, 1, or 2." << endl;
        return 1; 
    }

    int computerChoice = getComputerChoice();

    printUserChoice(userChoice);
    ComputerChoice(computerChoice);

    winner(userChoice, computerChoice);

    return 0;  
}
