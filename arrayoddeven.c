#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5},i;
    for(i=0;i<5;i++){
        if(a[i]%2==0){
            printf("Even Number=%d\n",a[i]);
        }
        else{
            printf("Odd Number=%d\npi",a[i]);
        }
    }
}