/*Program for this pointer*/
#include <iostream>

using namespace std;
class BankDetails
{
public:
    int accno;
    string bankname;
    static int bankinterest;
    BankDetails(int accno,string bankname)
    {
        this->accno=accno;
        this->bankname=bankname;
    }
    int display()
    {
        cout<<"Account no is"<<accno<<endl;
        cout<<"Bank name is"<<bankname<<endl;
        cout<<"Bank interest is"<<bankinterest<<endl;
    }
};
int BankDetails::bankinterest=8;
int main()
{
    BankDetails b1(1001,"HDFC");
    BankDetails b2(1002,"SBI");
    b1.display();
    b2.display();
}










