#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    while (i <15 ) {
    cout << i << endl;
    i++;
    }
int j = 1;
    while (j > -15) {
    cout << j << endl;
    j--;
    }
int a;
cin>>a;
   while( a < 20 ) {
      cout << "value of a: " << a << endl;
      a++;
   }
   int n;
    int addition = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n >= 0) {
        addition += n;

    cout << "The sum is " << addition << endl;
    }
    return 0;

}
