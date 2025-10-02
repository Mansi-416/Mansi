#include<stdio.h>
int magicnum(){
    int n,sum=0,lastdigit;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(n!=0){
       lastdigit=n%10;
       sum=sum+lastdigit;
       n=n/10;
    }
    printf("sum=%d",sum);
    
}