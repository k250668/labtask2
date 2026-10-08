#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of passengers: ";
    cin >> n;
    string* name = new string[n];
    for(int i = 0 ; i < n ;i++) {
        cout << "Passenger " << i + 1 << ": ";
        cin >> name[i];
    }
    for(int i = n-1 ; i>= 0 ; i--) {
        cout << name[i] << " ";
    }
 delete[] name;
    name = nullptr;
}