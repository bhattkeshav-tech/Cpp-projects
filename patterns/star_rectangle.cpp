// Printing  star rectangle pattern through nested loops


#include<iostream>

using namespace std;

int main(){
        int rows;
        cout<<"Enter number of rows: ";
        cin>>rows;
        int cols;
        cout<<"Enter number of columns: ";
        cin>>cols;
        /* rectangle star pattern
         rows=4 , cols=5
        */
        
        for(int i=1;i<=rows;i++){ //outer loop for rows
            for(int j=1;j<=cols;j++){
                cout<<"* "; //inner loop for columns

            }
            cout<<endl; //after each row we need to print a new line

        }





}