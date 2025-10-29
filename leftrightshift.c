#include<stdio.h>
int main(){
    int n=4;
    //left shift   a<<
    int a=n<<1<<1;      //double shift
    printf("%d\n",a);
    //right shift   a>>
    int b=n>>1>>1;
    printf("%d",b);
}