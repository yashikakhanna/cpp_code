#include <iostream>

using namespace std;

int main()
{
    int arr1[10]={1,2,3,4,5,6,7,8,9};
    int index;
    int arr2[index];
    int i;
    cout<<"Enter the size of destination array:-";
    cin>>index;

    if(index>=10){
    for(i=0;i<=8;i++){
        arr2[i]=arr1[i];
        cout<< arr2[i]<<endl;

    }
}
    else{

        cout<< "false"<<endl;
    }
      return 0;
}
