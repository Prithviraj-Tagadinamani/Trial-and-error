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
    
}