#include <iostream>
using namespace std;

void show(int** g, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) cout << g[i][j] << " ";
        cout << endl;
    }
}

void addNewStudent(int**& arr, int& n) {
    int** newGrades = new int*[n + 1];
    for (int i = 0; i <= n; i++)
        newGrades[i] = new int[3];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            newGrades[i][j] = arr[i][j];

    cout << "Enter 3 grades for new student: ";
    for (int j = 0; j < 3; j++)
        cin >> newGrades[n][j];


    for (int i = 0; i < n; i++){
    delete[] arr[i];
    }
    
    delete[] arr;

    arr = newGrades;
    n++;
}

int main() {
     int n;
    cout << "Enter number of students: ";
    cin >> n;
    int** arr = new int*[n];
    for(int i = 0 ; i < n ; i ++) {
    arr[i] = new int[3];
     cout << "Grades for student " << i + 1 << ": ";
        for (int j = 0; j < 3; j++) cin >> arr[i][j];
    }
      show(arr, n);

    addNewStudent(arr, n);
     show(arr, n);

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}