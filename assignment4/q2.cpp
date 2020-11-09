#include<iostream>

using namespace std;
class student{
public:
student(){
cout<<"I am the base class student"<<endl;
}
};
class UndergraduateStudent: public student{
public:
UndergraduateStudent(){
cout<<"I am the derived class Undergradaute from Base class Student"<<endl;
}
};
class GraduateStudent:public student{
public:
GraduateStudent(){
cout<<"I am the derived class GraduateStudent from Base class student"<<endl;
}
};
class Freshman: public UndergraduateStudent{
public:
Freshman(){
cout<<"I am the derived class Freshman from Base class UndergraduateStudent"<<endl;
}
};
class Junior:public UndergraduateStudent{
public:
Junior(){
cout<<"I am the derived class Junior from Base class UndergraduateStudent"<<endl;
}
};
class Senior:public UndergraduateStudent{
public:
Senior(){
cout<<"I am the derived class Senior from Base class UndergraduateStudent"<<endl;
}
};
class DoctoralStudent:public GraduateStudent{
public:
DoctoralStudent(){
cout<<"I am the derivded class DoctralStudent from Base class GraduateStudent"<<endl;
}
};
class MasterStudent:public GraduateStudent{
public:
MasterStudent(){
cout<<"I am the derivde class MasterStudent from Base class GraduateStudent"<<endl;
}
};

int main(){
UndergraduateStudent u;
GraduateStudent g;
Freshman f;
Junior j;
Senior s;
DoctoralStudent d;
MasterStudent m;
}
