// Example program
#include <iostream>
#include <string>


using namespace std;

class Person{
  public:
    Person(){
      cout<<"default const of Person called"<<endl;
    }
     ~Person(){
      cout<<"destructor of Person called"<<endl;
    }

};

class Student: public Person{
  public:
    Student(){
      cout<<"default const of student called"<<endl;
    }
    ~Student()
    {
      cout<<"destructor of student called" <<endl;
    }
};
int main ()
{
    //Student * ps1= new Student[3];
    Person * ps2 = new Student;
  //Student s2;
  //  Person p1;
  //  delete[] ps1;
    delete ps2;
    cout<<"end of main"<<endl;
}
