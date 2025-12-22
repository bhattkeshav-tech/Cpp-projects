
#include<iostream>

using namespace std;

int main(){

    int f;
    cout<<"Enter a number :  " ;
    cin>>f;
    for(int i=f/2; i>=1; i--){
        if(f%i==0){
            cout<<i<<" is a factor of "<<f<<endl;
        break; // Exit after finding the largest factor
          } 
    }
}