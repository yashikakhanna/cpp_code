#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main()
{
    float num_1,num_2,res;
    int choice;
    double resultsq, resultsin,resultcos,resulttan;

    do
    {
      cout <<"1.Addition"  << endl;
      cout << "2.Subtraction" << endl;
      cout << "3.Multiplication" << endl;
      cout << "4.Division" << endl;
      cout <<"5.Sine"  << endl;
      cout << "6.Cos" << endl;
      cout << "7.Tan" << endl;
      cout <<"8.Square Root"  << endl;
      cout <<"9.Exit"  << endl;
      cout <<"Enter Your Choice from 1-9,press no." ;
      cin>>choice;
      if( choice>=1 && choice<=4)
      {
          cout<<"Enter any two numbers"<<endl;
          cin>>num_1;
          cin>>num_2;


      }
      switch(choice)
      {
      case 1:
        res = num_1+num_2;
        cout<<"Result="<<res<<endl;
        break;

       case 2:
        res = num_1-num_2;
        cout<<"Result="<<res<<endl;
        break;

        case 3:
        res = num_1*num_2;
        cout<<"Result="<<res<<endl;
        break;

        case 4:
        res = num_1/num_2;
        cout<<"Result="<<res<<endl;
        break;
      }
    }
    while(choice>=5 && choice<=8);
    {


          cout<<"Enter any number"<<endl;
          cin>>num_1;
          resultsin= sin (num_1*3.14/180);



         switch(choice)
      {
      case 5:
        //res = resultsin;
        cout<<"Result="<<resultsin<<endl;
        break;

       case 6:
        res = 6;
        cout<<"Result="<<res<<endl;
        break;

        case 7:
        res = tan ( num_1*3.14/180);
        cout<<"Result="<<res<<endl;
        break;

        case 8:
        res = sqrt ( num_1);
        cout<<"Result="<<res<<endl;
        break;

        case 9:

        cout<<endl;
        break;

    }
    }

    return 0;
}
