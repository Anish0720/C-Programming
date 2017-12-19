#include<stdio.h>
int main(){
int a,i,sum=0;
int b=a;
printf("\n Enter the number");
scanf("%d",&a);
for(i=0;i<4;i++)
{
sum+=a;
a=(a*10)+b;
}
printf("%d",sum);
return 0;
}
