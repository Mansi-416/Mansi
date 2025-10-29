#include<stdio.h>
#include<string.h>
int main(){
    char name[]="poiuytrewq";
    int ln=strlen(name);
    int vowels=0,consonant=0;
    for(int i=0;i<ln;i++){
        char ch=name[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowels++;
        }
        else{
            consonant++;
        }
    }
    printf("Consonants=%d\n", consonant);
    printf("Vowels=%d\n", vowels);
    return 0;
}