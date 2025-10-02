#include<stdio.h>
int main(){
    int sum=0,i;
    int a[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
        sum+=a[i];
    }
    printf("sum=%d",sum);
}