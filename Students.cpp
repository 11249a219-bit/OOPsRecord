#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int rollno;
    float marks;
    void display(){
        cout<<"name:"<<name
        <<",Roll No:"<<rollno
        <<"marks:"<< marks << endl;
    }
};
int main(){
    student s1,s2,s3;
    s1.name="lakshmi";
    s1.rollno=101;
    s1.marks=85.5;
    s2.name="kiran";
    s2.rollno=102;
    s2.marks=93.2;
    s3.name="vasavi";
    s3.rollno=103;
    s3.marks=90.2;
    s1.display();
    s2.display();
    s3.display();
    return 0;
}
