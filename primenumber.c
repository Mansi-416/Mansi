//using for loop
/*#include<stdio.h>
int main(){
    int n,i;
    int isprime=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<=1){
    printf("not a prime number");
    return 0;
    }
    for(i=2;i<n;i++){
    if(n%i==0){
        isprime=0;
        break;
    }
}
if(isprime){
    printf("%d is a prime no.",n);
}
else{
    printf("%d is not a prime number",n);
} 
return 0;
}   */    


//using while loop
#include<stdio.h>
int main(){
    int n,i=2;
    int isprime=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<=1){
    printf("not a prime number");
    return 0;
    }
    while(i<n){
    if(n%i==0){
        isprime=0;
        break;
    }
    i++;
}
if(isprime){
    printf("%d is a prime no.",n);
}
else{
    printf("%d is not a prime number",n);
} 
return 0;
}       