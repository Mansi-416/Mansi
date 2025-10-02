#include<stdio.h>
int main(){
    int i,j,k;
    for(i=0;i<3;i++){
        for(k=3;k>=i;k--){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}