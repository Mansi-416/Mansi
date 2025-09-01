//calculator
/*#include<stdio.h>
int main(){
int a,b;
float c;
int ch;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
printf("enter your choice:");
scanf("%d",&ch);
switch(ch){
    case 1:
     c=a+b;
     printf("sum=%f",c);
     break;
    case 2:
     c=a-b;
     printf("subtraction=%f",c);
     break;
    case 3:
     c=a*b;
     printf("multiplication=%f",c);
     break;

    case 4:
     c=(float)a/b;
     printf("division=%f",c);
     break;
    default:
     printf("invalid choice!!");
     break;
}
return 0;
}*/ 




// traffic signal program
/*#include<stdio.h>
int main(){
    char ch;
    printf("\ng:green\ny:yellow\nr:red");
    printf("\nenter your choice:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'g': printf("go");
                  break;
        case 'y': printf("get ready");
                  break;
        case 'r': printf("stop");
                  break;
        default: printf("invalid choice");
                break;
    }
    return 0;
} */   




// currency converter
#include<stdio.h>
int main(){
    int ch;
    float amount,converted;
    printf("enter the amount:");
    scanf("%f",&amount);
    printf("\n1:INR TO USD\n2:USD TO EURO\n3:INR TO EURO\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
        case 1:
         converted=(float)amount/87;
         printf("main amount=%f",converted);
         break;
        case 2:
         converted=(float)amount*0.86;
         printf("main amount=%f",converted);
         break;
        case 3:
         converted=(float)amount*0.00971;
         printf("main amount=%f",converted);
         break;
        default:
         printf("invalid choice!!");
         break;
    }
    return 0;
}
