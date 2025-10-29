#include<stdio.h>
#include<string.h>
int main(){
    char name[]="hellooo";
    int freq[256]={0};
    int ln=strlen(name);
    int i;
    for(i=0;i<ln;i++){
        freq[name[i]]++;
    }
    for(i=0;i<ln;i++){
        if(freq[name[i]]==1){
        printf("%c",name[i]);
        continue;
        }
    }
    return 0;
}