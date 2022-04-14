#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string fname;
    string lname;
    char grade;
    int age;
    cout<<"What is your first name? ";
    getline(cin,fname);
    cout<<"What is your last name? ";
    getline(cin,lname);
    lname+=" , ";
    cout<<"What letter grade do you deserve? ";
    cin>>grade;
    cout<<"What is your age? ";
    cin>>age;
    //lname+=" , ";
    string fullname=lname+fname;
    int i=grade;

    if(i>=97&&i<=122){
        i=grade-32;
    }
    i++;
    cout<<"Name: "<<fullname<<endl;
    cout<<"Grade: "<<(char)i<<endl;
    cout<<"Age: "<<age<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
