#include<stdio.h>
#include<math.h>
int main()
{
int i,n=10000000,a[n],b[100],c=0;
for(i=1; i<=10000000; i++)
{
n= rand()%100;
a[i-1]=n;
}
for(int j=1; j<=100; j++)
{
b[j-1]=j;
}
for(int k=0; k<=100;k++)
{
if(a[n]==b[k])
{
c++;
printf("for %d the times they appear %d",k,c);
}
}
return 0;
}
