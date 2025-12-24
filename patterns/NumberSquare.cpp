// Pattern: Number Square

#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++){ //outer loop for rows
        for(int j=1;j<=n;j++){ //inner loop for columns
            cout<<j<<" ";//print column number
           
        }
        cout<<endl; //after each row print new line
    }
}
