#include <iostream>
#include <vector>
using namespace std;

struct CandyBar{
char name[20];
float weight;
int calories;
};

int main()
{
    int i;
   CandyBar s[3]={{"Macha Munch",2.3,350},{"Crunch",5.6,460},{"Crispy",6.4,430}};
   for(i=0;i<=2;i++){
    std::cout<<s[i]<<endl;
   }

//    cout << s[0]<< endl;
//    cout << s[1]<< endl;
//    cout << s[2]<< endl;
    return 0;
}
