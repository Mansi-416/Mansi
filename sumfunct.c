#include<stdio.h>
int sum()
{   int a,b;
    printf("Enter the value of a & b:");
    scanf("%d %d",&a,&b);
    int c;
    c=a+b;
    printf("%d",c);
    return 0;
    printf("helooooo\n");           // any statement after return will not be printed
}
int main(){
    sum();
}