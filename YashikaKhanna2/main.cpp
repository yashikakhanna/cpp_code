//Program for copy constructor
#include <iostream>

using namespace std;
class A
{
public:
     int x;
     A(int a)
     {
         x=a;
     }
     A(A &i)
     {
         x=i.x;
     }
};
int main()
{
    A a1(100);
    A a2(a1);
    cout<<"Value of object a1 is"<<a1.x<<endl;
    cout<<"Value of object a2 is"<<a2.x<<endl;
}
