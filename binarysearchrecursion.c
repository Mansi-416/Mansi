#include<stdio.h>
int binarysearch(int arr[],int s,int e,int search){
     if(s>e){
        return -1;
    }
    int mid=(s+e)/2;
    if(arr[mid]==search){
        return mid;
    }
    else if(arr[mid]<search){
        return binarysearch(arr,mid+1,e,search);
    }
    else
        return binarysearch(arr,s,mid-1,search);
}
int main(){
    int arr[5]={1,2,3,4,5};
    int search=7,s=0,e=4;
    int data=binarysearch(arr,s,e,search);
    if(data==-1)
         printf("not found");
         else
         printf("found");
    }