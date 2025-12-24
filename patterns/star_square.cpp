
#include<iostream>

using namespace std;

int main(){
    int m;
    cout<<"Enter sides of square: ";
    cin>>m;
    
    for(int i=1;i<=m;i++){ //rows=cols=m for star square pattern
         for(int j=1;j<=m;j++){//columns=m
         
               cout<<"* ";
         }
    
         cout<<endl;
        } 


}