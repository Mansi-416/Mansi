//Container with most water
#include<stdio.h>
#include<string.h>
int main(){
    int height[9]={1,8,6,2,5,4,8,3,7};
    int i=0;
    int j=8;
    int maxarea=0;
    while(i<j)
    {
        int h;
        if(height[i]<height[j]){
            h=height[i];    //h=1
        }
            else{
                h=height[j];
            }
            int w=j-i;    //w=8
            int area=h*w;   //area=8
            if(area>maxarea){
                maxarea=area;  //maxarea=8
            }
            if(height[i]<height[j]){
                i++;  //i=1
            }
            else{
                j--;
            }  
    }
    printf("%d",maxarea);
    return 0;
}