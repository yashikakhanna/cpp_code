#include <iostream>

using namespace std;
int i;

char arrcopy(char src[],char dst[]){
    cout<<"Enter the value of size of array:-";
    cin>>i;
if(i<=9){
    for(i=0;i<=7;i++;){
        char src[i]=char dst[i];
        cout<<dst[i]<<endl;
    }
    }
    else{
        cout<<"false"<<endl;
    }
    return 1;
}
int main()
{
    char arr1[10]={"abcdefghi"};
    char arr2[9];
    arrcopy(arr1[];arr2[]);
    cout<<arr2<<endl;
    return 0;
}
