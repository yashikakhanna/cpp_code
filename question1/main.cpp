#include <iostream>

using namespace std;

int main(){
int height;
int foot;
float inches;
const int conv=12;
cout<<"Enter your height in inches:-";
   cin>>height;
   foot=height/conv;
   inches=height%conv;
   cout<<"Your height is:-"<<foot<<"foot"<<" "<<inches<<"inches"<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
