#include<stdio.h>
int main(){
    int n=12;
    if(n&1){        //after applying & operator it will convert into binary
        printf("odd no.");
    }
    else{
        printf("even no.");
    }
    return 0;
}