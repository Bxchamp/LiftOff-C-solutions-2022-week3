#include<stdio.h>
int check(int a);
int main()
{
int a,b;
    printf("enter a number\n ");
    scanf("%d",&a);
    b=check(a);
    if(b==0)
    printf("even");
    else
printf("odd");
    return 0;
}
int check(a){
if(a%2==0)
return 0;
else 
return 1;
}