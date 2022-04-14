#include <iostream>

using namespace std;
class demo
{
public:
    demo()
    {
        cout<<"Demo constructor invoked"<<endl;
    }
    ~demo()
    {
        cout<<"Demo constructor invoked"<<endl;
    }
};

int main()
{
    int s=0;
    if(s==0)
    {
        static demo obj;
    }
    cout << "End of the program" << endl;
}
