/*  Pattern: Alphabet Square
    A A A A
    B B B B
    C C C C
    D D D D
*/


#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<<char(i+64)<<" ";// ASCII value of A is 65 [typecasting integer to char]
        }
        cout<<endl;
    }
}