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
//bool strcomp(char farr[],char sarr[],int n,int m){
//
//    int i=0;
//    if(m!=n){
//        return false;
//    }
//    for( i=0; i<=m+1;i++){
//        if(farr[i]=sarr[i]){
////                cout<<farr[i]<<endl;
////                cout<<sarr[i]<<endl;
//            return true;
//        }
//        else{
//            return false;
//        }
//
//
//
//    }
//
//}
////    if(n=m){
////    for(int i=0;i<=n;i++){
////            for(int j=0;j<=m;j++){
////                if(farr[i]=sarr[j]){
////                    return true;
//int i=0;
//int j=0;
//if(i<=n&&j<=m){
//        for(farr[i]=sarr[j];i++;j++){
//
//
//            }
//
//}
//return true;
//}
//
//        else{
//            return false;
//        }
//
//
//}
int strcomp(char str1[], char str2[]){
    int i=0;
int a=0;
int b=0;
char elem1=str1[a];
char elem2=str2[b];
while(elem1!=elem2){
       elem1=str1[++a];
       elem2=str2[++b];
       continue;
    return false;
}
return true;
//while(str1[i]==str2[i]){
//    i++;
//
//    return true;
//}
//
//return false;
////for(i=0;
//    if(elem1=elem2){
//        elem1=str1[++a];
//        elem2=str2[++b];
//        return true;
//    }
//    else{
//    return false;
//    }

}
//

int main(){

     char arr1[5]={"abcd"};
     char arr2[5]={"gbcd"};
    int n= strlength(arr1);
    int m= strlength(arr2);

 cout << arr1<< endl;
    cout << strcomp(arr1,arr2) << endl;
   cout << arr2<< endl;
    return 0;
}
