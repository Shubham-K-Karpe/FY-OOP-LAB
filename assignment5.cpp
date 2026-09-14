#include <iostream>
using namespace std;

class student
{
 public:
 
  int Student_id;
  string Student_name;
  char Student_grade;
 
 student(int Student_id, string Student_name, char Student_grade)
 {
  this->Student_id=Student_id;
  this->Student_name=Student_name;
  this->Student_grade=Student_grade;
 }
 void display()
 {
  cout<<"\nStudent ID:"<<Student_id;
  cout<<"\nStudnet Name:"<<Student_name;
  cout<<"\nStudnet Grade:"<<Student_grade;
  cout<<"\n--------------------------";
 }
 };
 int main()
 {
  student s1(20260001,"Aaryan",'A');
  student s2(20260002,"Bhushan",'O');
  s1.display();
  s2.display();
  return 0;
 }