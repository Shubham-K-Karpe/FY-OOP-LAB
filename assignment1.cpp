#include <iostream>
using namespace std;

class book
{
    public:
     string book_id;
     string book_name;
     string book_author;

    void display()
    { cout<<"Book ID:"<<book_id<<endl;
     cout<<"Book Name:"<<book_name<<endl;
     cout<<"Author Name:"<<book_author<<endl;
     cout<<"--------------------------------"<<endl;
    }
};
 int main()
{
    book b1;
    b1.book_id="001";
    b1.book_name="C++ Primer";
    b1.book_author="Stanley Lippman";
    b1.display();

    book b2;
    b2.book_id="002";
    b2.book_name="Effective C++";
    b2.book_author="Scott Meyers";
    b2.display();

    book b3;
    b3.book_id="003";
    b3.book_name="C++ Crash Course";
    b3.book_author="Josh Lospinoso";
    b3.display();
    return 0;
    
}