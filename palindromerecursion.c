#include<stdio.h>
int palindrome(int arr[],int i,int j){
    if(i>=j){
        return 1;
    }
    if(arr[i]!=arr[j]){
        return 0;
    }
    return palindrome(arr,i+1,j-1);
}
int main(){
    int arr[]={1,2,3,2,1};
    int startIndex=0;
    int endIndex=4;
    int data=palindrome(arr,startIndex,endIndex);
    printf("%d",data);
    
}