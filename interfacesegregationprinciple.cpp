#include<iostream>
using namespace std;
class TwodimensionalShape{
  public:
  virtual double area()=0;

};
class ThreedimensionalShape{
  public:
  virtual double area()=0;
  virtual double volume()=0;
};
class Square:public TwodimensionalShape{
  private:
  double side;
  public:
  Square(double side){
    this->side=side;
  }
  double area(){
    return side*side;
  }

};
class Cube : public ThreedimensionalShape {
private:
    double side;

public:
    Cube(double side){
      this->side=side;
    }

    double area() {
        return 6 * side * side;
    }

    double volume() {
        return side * side * side;
    }
};
int main(){
  TwodimensionalShape*square=new Square(5);
  ThreedimensionalShape* cube = new Cube(3);
  cout<<"Square Area:"<<square->area()<<endl;
  cout<<"Cube Area:"<<cube->area()<<endl;
  cout<<"Cube Volume:"<<cube->volume()<<endl;
  return 0;
  

}
// this is example of interface segregation principle, in this prinicple it states that we should not make not big abstract class and forces other child class to override the method from parent class taht is even not meaningful for child class ,its betetr to make small abstarct class and segegate the biggeer abstarct class into small ones,I did same in this code i did not go with Shape class instaed i didvide them into 2d and 3d shape class