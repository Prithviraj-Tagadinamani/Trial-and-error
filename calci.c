#include<stdio.h>
int a,b, result;
void add(){
    result=a+b;
    printf("%d + %d = %d",a,b,result);
}
void sub(){
    result=a-b;
     printf("%d - %d = %d",a,b,result);
}
void mul(){
    result=a*b;
     printf("%d * %d = %d",a,b,result);
}
void div(){
    result=a/b;
     printf("%d / %d = %d",a,b,result);
}
void mod(){
    result=a%b;
    printf("%d % %d = %d",a,b,result);
}
void read(){
    printf("Enter a and b values\n");
    scanf("%d%d",&a,&b);
}
void instruction(){
    printf("1. add\n2. sub\n3. mul\n4. div\n5. mod");
}
void main(){
    int ch;
    printf("Enter your choice\n");
    instruction();
    scanf("%d",&ch);
     read();
  switch(ch){
        case 1: add();
            break;
        case 2: sub();
            break;
        case 3: mul();
            break;
        case 4: div();
            break;
        case 5: mod();
            break;
        default: printf("Invalid choice\n");
        break;
    }  
}