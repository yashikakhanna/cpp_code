#include <iostream>

using namespace std;

int main()
{
//    int i = 1;
//          do{
//              cout<<i<<endl;
//              i++;
//          }
//           while (i <= 10) ;
   int a = 10;
         do{
              int b= 1;
              do{
                cout<<a<<endl;
                  b++;
              } while (b <= 3) ;
              a++;
          } while (a <= 3);
    return 0;
}
