#include <iostream>
using namespace std;
class student
{
 public:
        string name;
        string roll_no;
        float marks;

 void display()
 {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<roll_no<<endl;
        cout<<"Marks:"<<marks<<endl;
        cout<<"-----------------------"<<endl;
 }
};
 int main()
 {
        student s1;
        s1.name="Aryan";
        s1.roll_no="01";
        s1.marks=91.5;
        s1.display();

         student s2;
        s2.name="Bhushan";
        s2.roll_no="02";
        s2.marks=90.4;
        s2.display();

         student s3;
        s3.name="Charles";
        s3.roll_no="03";
        s3.marks=92.3;
        s3.display();
        return 0;
 }