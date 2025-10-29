#include<stdio.h>
#include<string.h>
struct Student{
        char Name[10];
        int Rollno;
        float Marks;
};
int main(){
    struct Student s1[5];
    int i;
    for (i=0;i<5;i++){
        printf("Enter Your Name:");
        scanf("%s",s1[i].Name);
        printf("Enter Roll No.:");
        scanf("%d",&s1[i].Rollno);
        printf("Enter Your Marks:");
        scanf("%f",&s1[i].Marks);
    }
    printf("---Data of student---\n\n\n");
    for(int i=0;i<5;i++){
        printf("NAME: %s\n",s1[i].Name);
        printf("ROLL NO: %d\n",s1[i].Rollno);
        printf("MARKS : %f\n",s1[i].Marks);
    }
    return 0;
}