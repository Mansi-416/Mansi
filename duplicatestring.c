#include<stdio.h>
#include<string.h>
int main(){
    char name[]="madam";
    int len=strlen(name);
    int i,j;
    for(int i=0;i<len;i++)
    {   int count=0;
        for(j=0;j<i;j++){
            if(name[i]==name[j]){
                count++;
                break;
            }
        }
        if(count==0){
            printf("%c",name[i]);
        }
    }
}