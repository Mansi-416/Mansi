//using while loop 
/*#include<stdio.h>
int main(){
    int i=1,n,t1=0,t2=1,t3;
    printf("enter n:");
    scanf("%d",&n);
    printf("fibonacci series:");
    while(i<=n){
        printf("%d ",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
        i++;
    }
}*/


//using for loop
#include<stdio.h>
int main(){
    int n,t1=0,t2=1,t3;
    printf("enter n:");
    scanf("%d",&n);
    printf("fibonacci series:");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",t1);
        t3=t1+t2;
        t1=t2;
        t2=t3;
    }
}