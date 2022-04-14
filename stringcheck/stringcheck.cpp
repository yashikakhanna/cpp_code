#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string text="Adrenal Vision International producer Adrienne Vismonger announced production of their new 3-D film, a remake of 'My Dinner with Andre,' scheduled for 2013. 'Wait until you see the the new scene with an enraged Collossipede!";
    int alphacount=0;
 int spacecount=0;
  int punctcount=0;
  int alnumcount=0;

    for(int i=0;i<text.size();i++){
        if(isalpha(text[i])!=0){
            alphacount++;
    }

        if(isspace(text[i])!=0){
            spacecount++;
        }
        if(ispunct(text[i])!=0){
            punctcount++;
        }
        if(isalnum(text[i])!=0)
           alnumcount++;
    }
    cout<< text.size()<<endl;
    cout << alphacount<< endl;
    cout <<  spacecount<< endl;
    cout << punctcount<< endl;
    cout << alnumcount<< endl;
    return 0;
}
