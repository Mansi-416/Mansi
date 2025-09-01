#include<stdio.h>
int main(){
    int l,b;
    printf("enter length and breadth:");
    scanf("%d %d",&l,&b);
    printf("area: %d",area(l,b));
    printf("perimeter: %d",perimeter(l,b));
}
int area(int l,int b){
    return l*b;
}
int perimeter(int l,int b){
    return 2*(l+b);
}