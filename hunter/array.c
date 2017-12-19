#include<stdio.h>
int main(){
int n,l,i,p,len,j;
int count=0,count1=0;
int a[100],b[100];
scanf("%d",&n);
scanf("%d",&l);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
count++;
}
for(i=0;i<l;i++){
scanf("%d",&b[i]);
count1++;
}
p=count;
for(j=0;j<l;j++){
a[p]=b[j];
p++;
}
len=count+count[i];
for(i=0;i<len;i++){
printf("%d",a[i]);
}
return 0;
}
