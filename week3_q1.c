#include<stdio.h>
int hcf(int a,int b);
int main()
{
int a,b,c;
    printf("enter 2 numbers ");
    scanf("%d %d",&a,&b);
    if(a>b)
    c=hcf(a,b);
    else
c=hcf(b,a);
printf("%d",c);
    
    return 0;
}
int hcf(a,b){
int i,h;
for(i=1;i<=b;i++){
if(a%i==0 && b%i==0)
h=i;
}
return h;
}

