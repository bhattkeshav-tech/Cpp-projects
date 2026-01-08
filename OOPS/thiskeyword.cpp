#include<iostream>

using namespace std;
class Cricketer{
  public:
    string name;
    int age;
    int runs;
  
    Cricketer(string name, int age, int runs){// parameterized constructor with same names as attributes.
      this->name = name;// this keyword is used to refer to the current object's members
      this->age = age;
      this->runs = runs;

    }
};

int main(){

  Cricketer c1("Sachin Tendulkar",47,34357);
  Cricketer c2("Virat Kohli",34,24936);
  cout<<"Cricketer Name: "<<c1.name<<endl<<"Age: "<<c1.age<<endl<<"Runs: "<<c1.runs<<endl;
  cout<<endl;
  cout<<"Cricketer Name: "<<c2.name<<endl<<"Age: "<<c2.age<<endl<<"Runs: "<<c2.runs<<endl;

} 

