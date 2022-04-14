#include <iostream>

using namespace std;


int i;
cin>>i;
int arrcopy(int src[],int dst[]){
    if(i<=9){
         dst[i] =  src[i];
        cout<<dst[i]<<endl;
        cout<<"true"<<endl;
        ++i;
    }
    else{
            cout<<"false"<<endl;

    }
 return 1;
}

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9};
    int arr2[9];
    cout << arr2 << endl;
    arrcopy(arr[],arr2[]);
    return 0;
}
