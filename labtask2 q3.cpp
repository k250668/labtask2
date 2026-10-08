#include <iostream>
using namespace std;
void additem(double*& arr,double price,int& n,int& size) {
    if(n == size) {
        double* newarr = new double[size*2];
        for(int i = 0 ; i < n ; i++) {
            newarr[i] = arr[i];
        }
         delete[] arr;
    arr = newarr;
    size *= 2;
   
    }
    arr[n++] = price;
    
}
int main() {
    int size = 3,n=0;
   double* arr = new double[size];
     additem(arr, 10.5, n, size);
    additem(arr, 20, n, size);
    additem(arr, 30, n, size);
    additem(arr, 40, n, size);   

    for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";

    delete[] arr;
    
}