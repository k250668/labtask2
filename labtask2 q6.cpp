#include <iostream>
#include <string>
using namespace std;

void display(int** cabin, int sizes[], string names[]) {
    for (int i = 0; i < 3; i++) {
        cout << names[i] << ": ";
        for (int j = 0; j < sizes[i]; j++) {
            if (cabin[i][j] == 1) {
                cout << "[X] ";
            }
            else {
                cout << "[O] ";
            }
        }
        cout << endl;
    }
}

int main() {
    string names[3] = {"First Class", "Business Class", "Economy Class"};
    int sizes[3] = {2, 4, 6};

    int** cabin = new int*[3];
    for (int i = 0; i < 3; i++) {
        cabin[i] = new int[sizes[i]];
        for (int j = 0; j < sizes[i]; j++) {
            cabin[i][j] = 0;
        }
    }

    int row;
    int seat;

    while (true) {
        cout << "\nEnter row (0 = First, 1 = Business, 2 = Economy, -1 to exit): ";
        cin >> row;

        if (row == -1) {
            break;
        }
        if (row < 0 || row > 2) {
            cout << "Error: Invalid row!" << endl;
            continue;
        }

        cout << "Enter seat number: ";
        cin >> seat;

        if (seat < 0 || seat >= sizes[row]) {
            cout << "Error: ";
            continue;
        }

        if (cabin[row][seat] == 1) {
            cout << "Error" << endl;
            continue;
        }

        cabin[row][seat] = 1;
        display(cabin, sizes, names);
    }

    for (int i = 0; i < 3; i++) {
        delete[] cabin[i];
    }
    delete[] cabin;

    cout << "Memory released. Goodbye." << endl;
}