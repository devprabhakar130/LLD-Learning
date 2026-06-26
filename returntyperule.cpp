#include<iostream>
using namespace std;
class Animal{

};
class Dog:public Animal{

};
class Parent{
public:
   virtual Animal*getAnimal(){
    cout<<"Animal instance"<<endl;
    return new Animal();
   }
};
class Child:public Parent{
  public:
  Dog*getAnimal(){
    cout<<"Dog instance"<<endl;
    return new Dog();
  }

};
class Client{
  private:
  Parent*p;
  public:
  Client(Parent*p){
    this->p=p;


  }
  void takeAnimal(){
    p->getAnimal();
  }
};
int main(){
  Parent*p=new Parent();
  Child*c=new Child();
  Client*client=new Client(c);
  client->takeAnimal();
  return 0;





}
// If a base class method returns a pointer/reference to a class, then an overridden method in the derived class can return a pointer/reference to a subclass of that return type.