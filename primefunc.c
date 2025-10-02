#include<stdio.h>
int prime(){
    int n,i=2;
    int isprime=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n<=1){
        printf("not prime");
        return 0;
    }
    while(i<n){
    if(n%i==0){
        isprime=0;
        break;
    }
    i++;
}
if(isprime)
   printf("%d is a prime no.",n);
else
   printf("%d is not a prime no.",n);
return 0;
}
int main(){
    prime();
}