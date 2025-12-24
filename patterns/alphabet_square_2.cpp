/*   Pattern: Alphabet Square
    a b c d
    a b c d
    a b c d
    a b c d    
*/



#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<<char(j+96)<<" ";// ASCII value of a is 97 [typecasting integer to char]
        }
        cout<<endl;
    }
}