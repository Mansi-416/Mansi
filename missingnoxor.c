#include<stdio.h>
int main(){
    int a=0,b=0;
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,4,5};
    for(int i=0;i<5;i++){
         a=a^arr1[i];
    }
    for(int i=0;i<4;i++){
        b=b^arr2[i];
    }
    int missing=a^b;
    printf("%d",missing);
}