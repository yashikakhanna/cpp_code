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

bool strcat(char fname[],char lname[],char name[],int n,int m,int o){
    int i=0;
    int j=0;
    int k=0;
    char temp=fname[i];
    if(o>n+m){
    while(temp!=0){
        name[k]=fname[i];
        temp=fname[++i];
        k++;
    }
    temp=lname[j];
     while(temp!=0){
        name[k]=lname[j];
        temp=lname[++j];
        k++;
    }
    name[k]='\0';
    return true;
    }
    return false;
}

int main()
{
    char str1[5]={"abcd"};
    char str2[5]={"efgh"};
    char name[9];
    int n= strlength(str1);
    int m= strlength(str2);
    int o= sizeof(name)/sizeof(name[0]);
    cout << str1 << endl;
    cout << str2 << endl;
    cout << n << endl;
    cout << m << endl;
    cout << o << endl;
    cout<< strcat(str1, str2,name, n, m, o)<<endl;
    strcat(str1, str2,name, n, m, o);
    cout << name << endl;
    cout<<k<<endl;
    return 0;
}
