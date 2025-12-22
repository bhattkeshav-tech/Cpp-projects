#include<iostream>

using namespace std;

int main(){

    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue; // Skip the rest of the loop when i is 5
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}