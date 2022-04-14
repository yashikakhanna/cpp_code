#include <iostream>

using namespace std;

int arr[2]{};
void add(int ele){
    int i;
    int *ptr;
   // ptr=arr;
    ptr[i]=ele;

for( i=0;i<2;i++){
    cout<< arr[i] <<",";
}
cout<< endl;
}

int main()
{
    add(2);
    add(8);
    add(4);
    return 0;
}
