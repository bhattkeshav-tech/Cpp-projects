#include<iostream>
using namespace std;
 
class Car{
  public:
    string name;
    int price ;
    int seats;
    string type;
  Car(){ // default constructor

  }
  Car(string n,int p, int s, string t){ // parameterized constructor

    name = n;
    price =p;
    seats= s;
    type = t;
  }


  };

void print(Car c){
  cout<<"Car Name: "<<c.name<<endl;
  cout<<"Car Price: "<<c.price<<endl;
  cout<<"Number of Seats: "<<c.seats<<endl;
  cout<<"Car Type: "<<c.type<<endl;
  cout<<endl;
}

void change(Car& c){//&- pass by reference
  c.name = "BMW X5";
  }

int main(){

  Car c1("Audi A6",6000000,5,"Sedan");
 

  Car c2;
  c2.name = "Range Rover";
  c2.price = 9000000;
  c2.seats = 5;
  c2.type = "SUV";


  // print(c1);
  // change(c1);
  // print(c1); // c1 will remain unchanged as we are passing by value. To change it we need to pass by reference.



  print(c1);
  
  print(c2);


}
