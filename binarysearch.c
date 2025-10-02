#include<stdio.h>
int binarysearch(int a[],int n,int search){
    int mid,s=0,e=n-1;
    while(s<=e){
        mid=(s+e)/2;
        if(a[mid]==search)
            return mid;
        
        else if(a[mid]<search)
            s=mid +1;
        
        else 
            e=mid-1;
        
    }
    return -1;
}
int main(){
    int a[100],search,n,i;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element to search:");
    scanf("%d",&search);
    int res=binarysearch(a,n,search);
    if(res!=-1){
        printf("Element %d found at position %d\n",search,res);
    }
    else
        printf("Element %d not found.\n",search);
        return 0;
}
