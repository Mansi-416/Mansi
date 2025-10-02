#include<stdio.h>
int main(){
    int n=12334,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    if(n==0){
        count=1;
    }
    while(n>0){
    count++;
    n=n/10;
    }
    printf("total no. of digits=%d",count);
    return 0;
}