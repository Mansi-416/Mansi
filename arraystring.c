#include<stdio.h>
int main(){
    char name[]="Mansi";
    int i=0;
    /*while(name[i]!='\0'){
        printf("%c\n",name[i]);
        i++;
    }*/
   for(i=0;name[i]!='\0';i++){
    printf("%c\n",name[i]);
   }
}