#include<stdio.h>
void swap(int a,int b);
int main()
{
int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
void swap(a,b){
int c;
c=a;
a=b;
b=c;
printf("value of a is:%d\n",a);
printf("value of b is:%d\n",b);

}