#include<iostream>

using namespace std;

class Student{ // class is a user defined data type
  public:   
   string name;  // attributes
    int rollno;  // attributes
    float cgpa;  // attributes

};


int main(){    

Student s1;// s1 is an object of class Student

cout<<"Enter name of Student 1: ";
cin>>s1.name; // taking input
cout<<"Enter Roll No of Student 1: ";
cin>>s1.rollno; // taking input
cout<<"Enter CGPA of Student 1: ";
cin>>s1.cgpa; // taking input 



Student s2; // s2 is another object of class Student
s2.name = "Disha";
s2.rollno= 47;
s2.cgpa= 9.6;





cout<<"Student 1 Name: "<<s1.name<<endl<<"Roll No: "<<s1.rollno<<endl<<"CGPA: "<<s1.cgpa<<endl;

cout<<endl;

cout<<"Student 2 Name: "<<s2.name<<endl<<"Roll No: "<<s2.rollno<<endl<<"CGPA: "<<s2.cgpa<<endl;

}