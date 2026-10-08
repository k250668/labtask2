#include <iostream>
using namespace std;

int main(){
    int shelf[6] = {102,0,305,0,401,908};
  
for(int i = 0 ; i < 6 ; i ++) {
    if(shelf[i] == 0){
       for(int j = i ; j <5  ; j++) {
//move left
       int temp = shelf[j];
       shelf[j] = shelf[j+1];
       shelf[j+1] = temp;

    }
    }
}
for(int i = 0 ; i < 6 ; i++) {
    cout <<  shelf[i] << " ";
}
}