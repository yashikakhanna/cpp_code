#include <iostream>

using namespace std;
class student
{
public:
    int std_rollno;
    string std_name;
public:
    void display()
    {
        cout<<"Display called"<<endl;
    }
};

int main()
{
    student s;
    s.std_rollno=207;
    s.std_name="Yashika Khanna";
    cout<<"RollNo is"<<s.std_rollno<<endl;
    cout<<"Name is"<<s.std_name<<endl;
    s.display();

}

