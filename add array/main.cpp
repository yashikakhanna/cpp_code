#include <iostream>
using namespace std;

int size=2;
int count=0;
int *arr=new int[size];

void add_dynamic(int ele){

for(count=0;count<=size;count++){
    if(arr[count]==0){
        arr[count]=ele;
   }
}
if(count/2==1){
    size += 2;
    int *arr=new int[size];
    }

for( int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
int main()
{
    add_dynamic(2);
    add_dynamic(5);
    add_dynamic(8);
    add_dynamic(1);
    add_dynamic(4);
    add_dynamic(3);

    return 0;
}
