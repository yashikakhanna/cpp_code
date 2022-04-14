#include <iostream>

using namespace std;
int strlength(char arr[]){
    int l=0;
    int index=0;
    char ele=arr[index];

    while(ele!=0){
        ele=arr[++index];
    }
    return index;

}

int strchar(char str[]){

int b=0;
char elem=str[b];
while(!(elem>=97 && elem<=122 || elem>=65 && elem<=90)){
        elem=str[++b];
    }
    return b;

}
int main()
{
    char arr[10]={"123"};
    int n=strlength(arr);
    cout<<n<<endl;
    cout << arr<<endl;
    cout<<strchar(arr)<<endl;

    return 0;
}
