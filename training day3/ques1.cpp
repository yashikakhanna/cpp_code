#include <iostream>

using namespace std;

int main()
{
    float foot,inches,pound;


    cout<<"Enter your height in foot and inches :";
    cin>>foot>>inches;
    cout<<"Enter your weight in pounds:";
    cin>>pound;
    float a=foot*12;
    float b=a+inches;
    float c=b*0.0254;
    float d=c;
    float e=pound/2.2;
    float f=e;
    float g=e/(c*c);
    cout<<"Your BMI is:"<<e<<endl;





    return 0;
}
