#include<stdio.h>
int prime(int a);
int main()
{ 
int a,c;
    printf("enter a number ");
    scanf("%d",&a);
    c=prime(a);
    if(c==2)
    printf("prime ");
    else
printf("not a prime number");
    
    return 0;
}
int prime(a){
int m=0,i;
for(i=1;i<=a;i++){
if(a%i==0)
m++;
}
return m;
}
