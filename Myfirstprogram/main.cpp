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
    cout<<"Rollno is"<<207<<endl;
    cout<<"Name is"<<"Yashika Khanna"<<endl;
    s.display();
}
