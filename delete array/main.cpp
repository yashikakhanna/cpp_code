#include <iostream>

using namespace std;
int size=2;
int count=0;
int *arr=new int[size];

void add_dynamic(int ele){

for(count=0;count<=size;count++){
    if(arr[count]==0){
        arr[count]=ele;
        break;
   }
}
if(count/2==1){
    size += 2;
    int *arr=new int[size];
    int arr1[size]=arr;
    delete arr[];
    }

for( int i=0;i<size;i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;
}
void delete_dynamic(){

for(count=0;count<=size;count++){
    if(arr[count]!=0){
        arr[count]=0;
        break;
   }
}
if(count/2==1){
    size -= 2;
    int *arr1=new int[size];
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
    delete_dynamic();
    delete_dynamic();
    delete_dynamic();
    delete_dynamic();
    delete_dynamic();
    delete_dynamic();
    cout << "Hello world!" << endl;
    return 0;
}
